#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdint.h> /* for uint16_t, uint32_t, and uint64_t */


/**
 * struct Elf64_Ehdr_s - ELF64 file header
 * @e_ident: ELF identification bytes
 * @e_type: file type
 * @e_machine: target machine
 * @e_version: file version
 * @e_entry: virtual address of the program entry point
 * @e_phoff: program header table file offset
 * @e_shoff: section header table file offset
 * @e_flags: processor-specific flags
 * @e_ehsize: ELF header size in bytes
 * @e_phentsize: program header table entry size
 * @e_phnum: number of entries in the program header table
 * @e_shentsize: section header table entry size
 * @e_shnum: number of entries in the section header table
 * @e_shstrndx: section header string table index
 *
 * This structure represents the ELF64 file header and provides
 * information about the format and structure of the file.
 */

typedef struct Elf64_Ehdr_s
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr_t;

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(char *msg);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif
