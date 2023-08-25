global main
    extern printf

section .data
    format db "Hello, Holberton", 0
    newline db 10, 0  ; Newline character and null terminator

section .text
main:
    ; Print the message
    mov edi, format
    xor eax, eax
    call printf

    ; Print a newline
    mov edi, newline
    xor eax, eax
    call printf

    ; Set return value to 0 and exit
    mov eax, 0
    ret
