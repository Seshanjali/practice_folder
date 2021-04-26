#include <stdio.h>

int main ()
{
	int a[2] = {15, 20};
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("file2", "w+");
	fp2 = fopen("file3", "w+");
	fprintf(fp1, "%d %d",a[0],a[1]);
	fwrite(a, 8, 1, fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
