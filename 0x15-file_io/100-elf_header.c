#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<elf.h>
#define BUFFER_SIZE 1024
/**
 * error - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @file: The file name to print in the error message.
 * @exit_code: The exit code to use when exiting the program.
 */
void error(char *msg, char *file, int exit_code) {
dprintf(STDERR_FILENO, "%s %s\n", msg, file);
exit(exit_code);
}
/**
 * print_string - Prints a string.
 * @str: The string to print.
 */
void print_string(char *str) {
while (*str)
putchar(*str++);
}
/**
 * print_hex - Prints a byte as a two-digit hexadecimal number.
 * @c: The byte to print.
 */
void print_hex(unsigned char c) {
char *hex = "0123456789abcdef";
putchar(hex[c >> 4]);
putchar(hex[c & 0xf]);
}
/**
 * main - Displays the information contained in
 *the ELF header at the start of an ELF file.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Return: 0 if successful, or 98 if an error occurs.
 */
int main(int argc, char *argv[]) {
int fd;
ssize_t bytes;
Elf64_Ehdr ehdr;
if (argc != 2)
error("Usage: elf_header elf_filename", "", 98);
fd = open(argv[1], O_RDONLY);
if (fd < 0)
error("Error: Can't read from file", argv[1], 98);
bytes = read(fd, &ehdr, sizeof(Elf64_Ehdr));
if (bytes != sizeof(Elf64_Ehdr))
error("Error: Can't read from file", argv[1], 98);
if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
error("Error: Not an ELF file", argv[1], 98);
print_string("ELF Header:\n");
print_string("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) {
print_hex(ehdr.e_ident[i]);
putchar(' ');
}
putchar('\n');
print_string("  Class:                             ");
print_string(ehdr.e_ident[EI_CLASS] == ELFCLASS32 ?
"ELF32\n" : "ELF64\n");
print_string("  Data:                              ");
print_string(ehdr.e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian\n" : "2's complement, big endian\n");
print_string("  Version:                           ");
putchar('0' + ehdr.e_ident[EI_VERSION]);
print_string(" (current)\n");
print_string("  OS/ABI:                            ");
print_string(ehdr.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V\n" : "UNIX - Linux\n");
print_string("  ABI Version:                       ");
putchar('0' + ehdr.e_ident[EI_ABIVERSION]);
putchar('\n');
print_string("  Type:                              ");
print_string(ehdr.e_type == ET_EXEC ? "EXEC (Executable file)\n": "DYN (Shared object file)\n");
print_string("  Entry point address:               ");
printf("0x%lx\n", ehdr.e_entry);
close(fd);
return (0);
}
