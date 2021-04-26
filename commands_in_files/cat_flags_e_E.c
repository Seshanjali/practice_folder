#include <stdio.h>

int main ()
{
	FILE *fp;
	char content;
	fp = fopen("file2.txt", "r");
	if (fp != NULL) {
		while ((content = fgetc(fp)) != EOF) {
			if (content == '\n') {
				printf("$");
			}
			printf("%c", content);
		}
		fclose(fp);
	} else {
		printf("file2 can't open\n");
	}
	return 0;
}
