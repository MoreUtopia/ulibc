#include <stdint.h>
#include <stdio.h>
#include <string.h>

uintptr_t current_error = 0;

void __libc_set_error(uintptr_t new_error) {
    // as I do not think anyone uses perror recursively, like this:
    //      do_x(); do_y(); perror("y"); perror("x");
    // I think we may use this approach
    current_error = new_error;
}

static char* error_msg(uintptr_t errcode) {
    if (errcode == 0) 
        return "No error encountered so far, application bug";

    uintptr_t index = errcode * (-1);

    char* error_table[] = {
        [1] = "Not implemented",
        [2] = "Invalid argument",
        [3] = "No such file or directory",
        [4] = "Filesystem node type mismatch",
        [5] = "Permission denied",
        [6] = "Buffer too small",
        [7] = "Message too large",
        [8] = "Bad executable",
        [9] = "No memory"
    };

    if (index > (sizeof(error_table) / sizeof(char*)) || !error_table[index]) {
        return "Unknown error";
    }

    return error_table[index];
}

void perror(char* what) {
    write(2, what, strlen(what));
    write(2, ": ", 2);
    fputs(
        2, error_msg(current_error)
    );
}
