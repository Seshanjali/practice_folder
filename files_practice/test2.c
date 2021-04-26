#include <stdio.h>

int main ()
{
	FILE *fp;
	fp = fopen("file1.txt", "w+");
	if (fp == NULL) {
		printf("file1 is not present\n");
	} else {
		printf("file1 is present\n");
		fclose(fp);
	}
}
