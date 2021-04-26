#include <stdio.h>
#include <elf.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
	Elf64_Ehdr elf;
	Elf64_Shdr *sh_ptr;
	FILE *fp;
	int i;
	fp = fopen(argv[1], "r");
	fread(&elf,64,1,fp);
	printf("Elf Header\n");
	printf("Magic:\t");
	for (i = 0; i < 4; i++) {
		printf("%x ", elf.e_ident[i]);
	}
	while (i < 16) {
		printf("0%x ", elf.e_ident[i]);
		i++;
	}
	printf("\n");
	printf("class:\t\t\t\t\tELF64\n");
	if (elf.e_ident[5] == 1) {
		printf("Data:\t\t\t\t\t2's compliment, little endian\n");
	} else if (elf.e_ident[5] == 0) {
		printf("Data:\t\t\t\t\t1's compliment, little endian\n");
	}	
	printf("Version:\t\t\t\t%d (current)\n", elf.e_ident[6]);
	printf("OS/ABI:\t\t\t\t\tUNIX - System V\n");
	printf("ABI Version:\t\t\t\t0\n");
//	printf("%d\n", elf.e_type);
	if (elf.e_type == 3) {
		printf("Type:\t\t\t\t\tDYN (shared object file)\n");
	} else if (elf.e_type == 1) {
		printf("Type:\t\t\t\t\tREL (Relocatable file)\n");
	} 
	printf("Machine:\t\t\t\tAdvanced Micro Devices X84-64\n");
	printf("version:\t\t\t\t0x%x\n", elf.e_version);
	printf("Entry Point Address:\t\t\t0x%lx\n", elf.e_entry);
	printf("Start of Program Headers:\t\t%ld (bytes into file)\n", elf.e_phoff);
	printf("Start of Section Headers:\t\t%ld (bytes into file)\n", elf.e_shoff);
	printf("Flags:\t\t\t\t\t0x%x\n", elf.e_flags);
	printf("Size of this Header:\t\t\t%d (bytes)\n", elf.e_ehsize);
	printf("Size of Program Headers:\t\t%d (bytes)\n", elf.e_phentsize);
	printf("Number of Program Headers:\t\t%d\n", elf.e_phnum);
	printf("Size of Section Headers:\t\t%d (bytes)\n", elf.e_shentsize);
	printf("Number of Section Headers:\t\t%d \n", elf.e_shnum);
	printf("Section Header string table index:\t%d\n", elf.e_shstrndx);

	printf("\nSection Headers\n");
	int size = (elf.e_shentsize * elf.e_shnum);
	sh_ptr = (Elf64_Shdr *) malloc(sizeof(Elf64_Shdr) * elf.e_shnum);
	fseek(fp, elf.e_shoff, SEEK_SET);
	fread(sh_ptr, size,1,fp);
	fseek(fp, sh_ptr[elf.e_shstrndx].sh_offset, SEEK_SET);
	char *sh_names = malloc(sh_ptr[elf.e_shstrndx].sh_size);
	fread(sh_names, (sh_ptr[elf.e_shstrndx].sh_size),1,fp);
//	printf("hello%s\n", sh_names + 1);
	for (i = 0; i <= elf.e_shstrndx; i++) {
		char *name = sh_names + sh_ptr[i].sh_name;	
		printf("%d %s\n", i,  name);
//		printf("%lx\n", sh_ptr[i].sh_offset);
	}
	fclose(fp);
	return 0;
}
	
