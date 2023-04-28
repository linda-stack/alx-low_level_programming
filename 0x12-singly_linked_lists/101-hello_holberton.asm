section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello
    xor eax, eax
    call printf
    xor eax, eax ; set return value to 0 (success)
    pop rbp
    ret
