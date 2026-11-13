#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/syscall.h>

// TODO: rename this function
static int common_process_creation_like(
    char* path, int syscall_conv,
    char** argv, char** envp, bool become
) {
    int64_t res = __libc_syscall4(
        become ? 2002 : 2001, // 2001 is spawn and 2002 is become (replace process)
        (uintptr_t)path, syscall_conv, (uintptr_t)argv, (uintptr_t)envp
    );

    if (res < 0) {
        __libc_set_error(res);
        return -1;
    }

    return 0;
}

int spawn(char* path, int syscall_conv, char** argv, char** envp) {
    return common_process_creation_like(path, syscall_conv, argv, envp, false);
}

int become(char* path, int syscall_conv, char** argv, char** envp) {
    return common_process_creation_like(path, syscall_conv, argv, envp, true);
}
