.file   "101-hello_holberton.asm"
        .text
        .section        .rodata
.LC0:
        .string "Hello, Holberton\n"
        .text
        .globl  main
        .type   main, @function
main:
        endbr64
        pushq   %rbp
        movq    %rsp, %rbp
        leaq    .LC0(%rip), %rdi
        movl    $0, %eax
        call    printf@PLT
        popq    %rbp
        ret
