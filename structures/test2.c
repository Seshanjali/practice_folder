#include <stdio.h>

struct example
{
	char a[10];
	char b;
	int c;
};

int main ()
{
	struct example ex = {"asa"};
	printf("%s, %d, %d\n", ex.a, ex.b, ex.c);
	printf("int size is %d , struct size: %d  %d\n", (int) sizeof(char *),(int) sizeof(ex), sizeof(ex.a));
	return 0;
}
