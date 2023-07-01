; 101-hello_holberton.asm
extern printf

section .data
    msg db 'Hello, Holberton', 0Ah, 0

section .text
    global main

main:
    ; printf(msg)
    mov rdi, msg
    xor rax, rax
    call printf

    ; return 0
    xor rax, rax
    ret
