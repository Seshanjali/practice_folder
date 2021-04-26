#include "header.h"

int main ()
{
	int a;
	int b;
	printf("enter a, b values for add\n");
	scanf("%d%d", &a, &b);
	printf("%d\n", add(a, b));
	return 0;
}
