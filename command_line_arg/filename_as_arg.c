#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	FILE *fp;
	int i;
	char reading[50];
	fp = fopen(argv[1], "a+");
	for (i = 2; i < argc; i++) {
		fwrite(argv[i], strlen(argv[i]), 1, fp);
		fputc(10, fp);
	}
	rewind(fp);
	while (fscanf(fp, "%s", reading) != EOF) {
		printf("%s\n", reading);
	}
	fclose(fp);
	return 0;
}
	
