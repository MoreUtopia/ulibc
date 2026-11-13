#pragma once

#include <stdint.h>

void puts(char* what);
void fputs(int fd, char* what);
void write(int fd, char* what, uintptr_t len);
