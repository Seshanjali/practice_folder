#include <stdio.h>

int main ()
{
	FILE *fp1;
	FILE *fp2;
	char content;
	char buff[50];
	fp1 = fopen("file2.txt", "r");
	if (fp1 != NULL) {
		fp2 = fopen("file3.txt", "a+");
		if(fp2 != NULL) {
			while ((content = fgetc(fp1)) != EOF) {
				fputc(content, fp2);
			}
			printf("concate complete\n");
			rewind(fp2);
			while (fscanf(fp2, "%s", buff) != EOF) {
				printf("%s\n", buff);
			}
			fclose(fp1);
			fclose(fp2);
		} else {
			printf("file2 can't open\n");
		}
	} else {
		printf("file1 can't open\n");
	}
	return 0;
}
