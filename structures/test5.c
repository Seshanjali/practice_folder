#include <stdio.h>
#pragma pack(1)


struct ex
{	
	int b;
	char a[10];
	int *c;
	char *d;
};

int main ()
{
	struct ex e;
	printf("%ld %ld %ld %ld\n", sizeof(e), sizeof(e.a), sizeof(e.c), sizeof(e.d));
	printf("%ld\n", sizeof(int));
	return 0;
}
