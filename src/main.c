#include <sys/syscall.h>
#include <stdio.h>

extern int main();

__attribute__((force_align_arg_pointer))
void _start() {
    main();
    __libc_syscall0(2000);
}

__attribute__((weak)) 
int main() {
    puts(
#define NL "\n"
        "Hello world!" NL
        "You have successfully compiled your executable, but the `int main()` function is missing." NL
        "Please implement it and recompile your program."
#undef NL
    );

    return 0;
}
