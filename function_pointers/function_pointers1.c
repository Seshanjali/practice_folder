#include <stdio.h>

int function1(int , int );
int function2(int , int );
int (*fptr)(int , int );

int main ()
{
	int input;
	int a;
	int b;
	printf("enter a and b values\n");
	scanf("%d%d", &a, &b);
	printf("enter input\n");
	scanf("%d", &input);	
	if (input == 1) {
		fptr = function1;
		printf("%d\n", fptr(a, b));
	} else {
		fptr = function2;
		printf("%d\n", fptr(a, b));
	}
	return 0;
}

int function1 (int a, int b)
{
	return (a + b);
}

int function2 (int a, int b)
{
	return (a - b);
}

