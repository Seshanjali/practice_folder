#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main ()
{
	FILE *fp;
	int size;
	char *content = (char *) malloc(sizeof(char) * 50);
	char reading[50];
	__fpurge(stdin);
	printf("enter content\n");
	fgets(content, 50, stdin);
	for (size = 0; content[size] != '\0'; size++);
	fp = fopen("file2.txt", "w+");
	if (fp == NULL) {
		printf("file2 not present\n");
	} else {
		printf("file2 present\n");
		fwrite(content, size - 1, 1, fp);
//		fseek(fp, 0, SEEK_SET);

		rewind(fp);
		fread(reading, size - 1, 1, fp);
		reading[size - 1] = '\0';
		printf("%s", reading);
		fclose(fp);
	}
	return 0;
}
