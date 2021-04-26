#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main ()
{
	FILE *fp;
	char *content = (char *) malloc(sizeof(char) * 50);
	char buffer[100];
	int size;
	__fpurge(stdin);
	printf("enter content\n");
	fgets(content, 50, stdin);
	for (size = 0; content[size] != '\0'; size++);
	fp = fopen("file3.txt", "a+");
	if (fp != NULL) {
		printf("file 3 opened in append mode\n");
		fputs(content, fp);
		rewind(fp);
		fgets(buffer, size, fp);
		buffer[size] = '\0';
		printf("%s\n", buffer);
		fclose(fp);
	} 
	return 0;
}
