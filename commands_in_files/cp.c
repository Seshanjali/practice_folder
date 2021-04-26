#include <stdio.h>

int main ()
{
	FILE *fp1;
	FILE *fp2;
	char content;
	fp1 = fopen("file1.txt", "r");
	if (fp1 != NULL) {
		fp2 = fopen("file2.txt", "w");
		if(fp2 != NULL) {
			while ((content = fgetc(fp1)) != EOF) {
				fputc(content, fp2);
			}
			printf("copy of file1 to file2 is complete\n");
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
	
