#include <stdio.h>

int main ()
{
	FILE *fp;
	int count;
	char buff[50];
	fp = fopen("file2.txt", "r");
	if (fp != NULL) {
		while (fscanf(fp, "%s", buff) != EOF) {
			count++;
		}
		printf("word count of file2 is: %d\n", count);
		fclose(fp);
	} else {
		printf("file2 can't open\n");
	}
	return 0;
}
