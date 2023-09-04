#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *message) {
    dprintf(2, "%s\n", message);
    exit(98);
}

int main(int argc, char *argv[]) {
    const char *filename;
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error: Can't open file");
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        print_error("Error: Can't read ELF header");
    }

    close(fd);

    /* Check if it's a valid ELF file */
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Error: Not an ELF file");
    }

    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3],
           elf_header.e_ident[4], elf_header.e_ident[5], elf_header.e_ident[6], elf_header.e_ident[7],
           elf_header.e_ident[8], elf_header.e_ident[9], elf_header.e_ident[10], elf_header.e_ident[11],
           elf_header.e_ident[12], elf_header.e_ident[13], elf_header.e_ident[14], elf_header.e_ident[15]);
    printf("  Class:                             %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", (elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (elf_header.e_type == ET_EXEC) ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

    return 0;
}

