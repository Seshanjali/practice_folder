#include <stdio.h>

int main ()
{
	FILE *fp;
	int character_count = 0;
	int line_count = 0;
	int word_count =0;
	char buff[50];
	char content;
	fp = fopen("file2.txt", "r");
	if (fp != NULL) {
		while (fscanf(fp, "%s", buff) != EOF) {
			word_count++;
		}
		rewind(fp);
		while ((content = fgetc(fp)) != EOF) {
			if (content == '\n') {
				line_count++;
			}
			character_count++;
		}
		printf("wc-%d\tlc-%d\tcc-%d\tfile2.txt\n", word_count, line_count, \
				(character_count - line_count));
		fclose(fp);
	} else {
		printf("file2 can't open\n");
	}
	return 0;
}
