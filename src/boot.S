global main
[bits 32]

%include "kernel_entry.S"
%include "mb_boot_stub.S"

section .text
main:
    call kcall
    cli 
    hlt
