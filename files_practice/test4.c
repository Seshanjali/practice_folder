#include <stdio.h>

int main ()
{
	FILE *fp;
	char buffer[100];
	fp = fopen("file1.txt", "a+");
	if (fp != NULL) {
		printf("file 1 is opened in append mode\n");
		fprintf(fp, " seshanjali");
		rewind(fp);
		while (fscanf(fp, "%s", buffer) != EOF) {
			printf("%s\n", buffer);
		}
		fclose(fp);
	} 
	return 0;
}
