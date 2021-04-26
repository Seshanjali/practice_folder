#include <stdio.h>

typedef anjali {
	int a;
	char b;
}a;

int main ()
{
	a.a = 10;
	a.b = 'c';
	printf("%d %c\n", a.a, a.b);
	return 0;
}
