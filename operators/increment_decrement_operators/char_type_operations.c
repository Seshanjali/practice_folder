//increment and decrement operators for char type values

#include <stdio.h>

int main ()
{
	char input1;
	printf("enter one character: ");
	scanf("%c", &input1);
	printf("incremented value is: %c\n", ++ input1);
	printf("decremented value is: %c\n", -- input1);
	return 0;
}
