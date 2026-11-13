#pragma once

#include <stdint.h>

#define __LIBC_SYSCALL_FUNC_DECLARE(no, ...) \
    uint64_t __libc_syscall##no (uint64_t syscall_no, ##__VA_ARGS__);

__LIBC_SYSCALL_FUNC_DECLARE(0)
__LIBC_SYSCALL_FUNC_DECLARE(1, uint64_t arg1)
__LIBC_SYSCALL_FUNC_DECLARE(2, uint64_t arg1, uint64_t arg2)
__LIBC_SYSCALL_FUNC_DECLARE(3, uint64_t arg1, uint64_t arg2, uint64_t arg3)
__LIBC_SYSCALL_FUNC_DECLARE(4, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
__LIBC_SYSCALL_FUNC_DECLARE(5, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
__LIBC_SYSCALL_FUNC_DECLARE(6, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6)
