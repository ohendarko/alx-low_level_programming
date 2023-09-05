#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
* display_elf_header_info - Display information from the ELF header.
* @header: A pointer to the ELF header structure.
*/
void display_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) 
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
    
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
				break;
		case ELFOSABI_ARM:
				printf("ARM\n");
				break;
		case ELFOSABI_STANDALONE:
				printf("Standalone (embedded) application\n");
				break;
		default:
				printf("Unknown\n");
				break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
		return 98;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 98;
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return 98;
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return 98;
	}
	display_elf_header_info(&header);
	close(fd);
	return 0;
}
