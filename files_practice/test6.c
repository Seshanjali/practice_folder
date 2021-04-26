#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main ()
{
	FILE *fp;
	int i = 0;
	char *content = (char *) malloc(sizeof(char) * 50);
	char buffer[100];
	int size;
	__fpurge(stdin);
	printf("enter content\n");
	fgets(content, 50, stdin);
	for (size = 0; content[size] != '\0'; size++);
	fp = fopen("file4.txt", "a+");
	if (fp != NULL) {
		printf("file 4 opened in append mode\n");
		fputs(content, fp);
		rewind(fp);
		while ((buffer[i] = fgetc(fp)) != EOF) { 
			i++;
		}
		buffer[i] = '\0';
		printf("%s", buffer);
		fclose(fp);
	} 
	return 0;
}
