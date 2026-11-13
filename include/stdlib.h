#pragma once

#include <stdint.h>

// error handling
void perror(char* what);
void __libc_set_error(uintptr_t new_error);

// process creation / replacement
#define EXEC_ABI_NATIVE 0
#define EXEC_ABI_LINUX 1

int become(char* path, int syscall_conv, char** argv, char** envp);
int spawn(char* path, int syscall_conv, char** argv, char** envp);
