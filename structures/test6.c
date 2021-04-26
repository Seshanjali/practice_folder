#include <stdio.h>

typedef struct 
{
	char a;
	int b;
}anjali;

int main ()
{
	anjali a = {'a', 10};
	printf("%c %d\n", a.a, a.b);
	return 0;
}
