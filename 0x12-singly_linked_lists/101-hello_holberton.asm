section  .data
   message db "hello, holberton", 0xa

 section .text
     global _start

_start:

  mov ah, 09h
  mov dx, message
  int 21h

  mov ah, 4Ch
  xor al, al
  int 21h 
