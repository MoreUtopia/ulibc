#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/syscall.h>

void puts(char* what) {
    __libc_syscall3(5, 1, (uintptr_t)what, strlen(what));

    // puts appends a newline at the end
    __libc_syscall3(5, 1, (uintptr_t)&"\n", 1);
}
