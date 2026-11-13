#pragma once

#include <stdint.h>

extern size_t strlen(const char *str);
extern void* memcpy(void* dest, const void* src, size_t n);
extern void* memmove(void *dst, const void *src, size_t n);
extern void* memset(void* dest, int val, size_t n);
extern int memcmp(const void* a, const void* b, size_t n);
