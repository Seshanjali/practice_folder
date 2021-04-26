//increment and decrement operators for int type values

#include <stdio.h>

int main ()
{
	int input1;
	printf("enter one integer value: ");
	scanf("%d", &input1);
	printf("incremented value is: %d\n", ++ input1);
	printf("decremented value is: %d\n", -- input1);
	return 0;
}
