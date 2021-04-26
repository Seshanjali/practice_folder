#include <stdio.h>

int main ()
{
	FILE *fp;
	int i = 1;
	char content;
	fp = fopen("file2.txt", "r");
	if (fp != NULL) {
		while (fgetc(fp) == '\n') {
			printf("%c", content);
		}
			printf("%d\t", i);
			i++;
		fclose(fp);
	} else {
		printf("file2 can't open\n");
	}
	return 0;
}
