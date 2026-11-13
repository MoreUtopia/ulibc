#pragma once

#if defined(__x86_64__)

#define __LIBC_SYSCALL_REG0 "rax"
#define __LIBC_SYSCALL_ASM_REG0 "a"

#define __LIBC_SYSCALL_REG1 "rdx"
#define __LIBC_SYSCALL_ASM_REG1 "d"

#define __LIBC_SYSCALL_REG2 "rdi"
#define __LIBC_SYSCALL_ASM_REG2 "D"

#define __LIBC_SYSCALL_REG3 "rsi"
#define __LIBC_SYSCALL_ASM_REG3 "S"

#define __LIBC_SYSCALL_REG4 "r10"
#define __LIBC_SYSCALL_ASM_REG4 "r"

#define __LIBC_SYSCALL_REG5 "r8"
#define __LIBC_SYSCALL_ASM_REG5 "r"

#define __LIBC_SYSCALL_REG6 "r9"
#define __LIBC_SYSCALL_ASM_REG6 "r"

#define __LIBC_LOSS_REGISTERS "rcx", "r11"
#define __LIBC_SYSCALL_INSTRUCTION "syscall"

#elif defined(__riscv) && (__riscv_xlen == 64)

#define __LIBC_SYSCALL_REG0 "a0"
#define __LIBC_SYSCALL_ASM_REG0 "r"

#define __LIBC_SYSCALL_REG1 "a1"
#define __LIBC_SYSCALL_ASM_REG1 "r"

#define __LIBC_SYSCALL_REG2 "a2"
#define __LIBC_SYSCALL_ASM_REG2 "r"

#define __LIBC_SYSCALL_REG3 "a3"
#define __LIBC_SYSCALL_ASM_REG3 "r"

#define __LIBC_SYSCALL_REG4 "a4"
#define __LIBC_SYSCALL_ASM_REG4 "r"

#define __LIBC_SYSCALL_REG5 "a5"
#define __LIBC_SYSCALL_ASM_REG5 "r"

#define __LIBC_SYSCALL_REG6 "a7"
#define __LIBC_SYSCALL_ASM_REG6 "r"

#define __LIBC_LOSS_REGISTERS "a6"
#define __LIBC_SYSCALL_INSTRUCTION "ecall"

#endif
