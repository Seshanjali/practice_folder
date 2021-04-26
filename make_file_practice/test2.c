#include <stdio.h>

int add(int, int);

int main ()
{
	int a;
	int b;
	printf("a, b values for add\n");
	scanf("%d%d", &a, &b);
	printf("a + b = %d\n", add(a, b));
	return 0;
}	
