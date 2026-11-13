#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/syscall.h>

void write(int fd, char* what, uintptr_t len) {
    __libc_syscall3(5, fd, (uintptr_t)what, len);
}

void fputs(int fd, char* what) {
    write(fd, what, strlen(what));

    // puts appends a newline at the end
    write(fd, "\n", 1);
}

void puts(char* what) {
    fputs(1, what);
}
