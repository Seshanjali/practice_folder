#include <stdio.h>

int main ()
{
	FILE *fp;
	int line_no = 0;
	char content;
	int i = 1;
	fp = fopen("file2.txt", "r");
	if (fp != NULL) {
		while ((content = fgetc(fp)) != EOF) {
			if (content == '\n') {
				++line_no;
			}
		}
		rewind(fp);
		printf("%d\t", i);
		while ((content = fgetc(fp)) != EOF) {
			printf("%c", content);
			if (content == '\n') {
				if (i < line_no)
					printf("%d\t", ++i);
			}
		}
		fclose(fp);
	} else {
		printf("file2 can't open\n");
	}
	return 0;
}
