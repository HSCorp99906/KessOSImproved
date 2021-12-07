default:
	nasm -f elf64 boot.S
	gcc -c ../kernel/*.c  -fstack-protector
	ld -n -o kernel.bin -T linker.ld boot.o kernel.o
	mv kernel.bin iso/boot
	grub-mkrescue -o KessOS.iso iso
	rm *.o

run:
	qemu-system-x86_64 KessOS.iso
