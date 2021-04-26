#include <stdio.h>

int main ()
{
	FILE *fp;
	fp = fopen("file8.txt", "r+");
	if (fp == NULL) {
		printf("file8 is not present\n");
	} else {
		printf("file8 is present\n");
		fclose(fp);
	}
}
