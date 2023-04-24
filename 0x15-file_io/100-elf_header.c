#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "main.h"

#define EI_NIDENT 16

/**
 * print_error - function that appends text at the end of
 * a file.
 *
 * @msg: name of the file
 */

void print_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * main- program that appends text at the end of file.
 *
 * @argc: Number of arguments passed to main progam
 * @argv: character pointer to character strings passed to
 * main program
 *
 * Return: integer.
 */

int main(int argc, char **argv)
{
/* Variable Declarations */
	FILE *fp;
	unsigned char magic[EI_NIDENT];
	int i;
	Elf64_Ehdr header;

/* Code Statemets */
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	fp = fopen(argv[1], "rb");
	if (!fp)
	{
		print_error("Failed to open file");
	}
/* Read and check the magic number */
	if (fread(magic, 1, EI_NIDENT, fp) != EI_NIDENT)
	{
		print_error("Failed to read magic number");
	}
	if (magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
	{
		print_error("File is not an ELF file");
	}
/* Read the ELF header */
	if (fread(&header, 1, sizeof(header), fp) != sizeof(header))
	{
		print_error("Failed to read ELF header");
	}
/* Print the header fields */
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", magic[i]);
	}
	printf("\n");
	printf("Class:				%u-bit\n", header.e_ident[4] == 1 ? 32 : 64);
	printf("Data:				%s\n", header.e_ident[5] == 1 ? "little-endian" : "big-endian");
	printf("Version:			%u\n", header.e_ident[6]);
	printf("OS/ABI:				%u\n", header.e_ident[7]);
	printf("ABI Version:			%u\n", header.e_ident[8]);
	printf("Type:				%u\n", header.e_type);
	printf("Entry point address:		0x%lx\n", header.e_entry);

	fclose(fp);
	return (0);
}
