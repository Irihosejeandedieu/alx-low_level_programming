section .data
    hello db 'Hello, Holberton', 0xA ; 0xA is the newline character

section .text
    extern printf

global main
main:
    ; Call printf
    mov rdi, hello
    call printf

    ; Return 0 from main
    mov eax, 0
    ret
