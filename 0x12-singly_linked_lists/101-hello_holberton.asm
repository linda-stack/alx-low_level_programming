; 101-hello_holberton.asm
section .data
    msg db 'Hello, Holberton', 0Ah, 0

section .text
    global _start

_start:
    ; write(1, msg, 16)
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 16
    syscall

    ; exit(0)
    mov rax, 60
    xor rdi, rdi
    syscall
