//increment and decrement operators for float type values

#include <stdio.h>

int main ()
{
	float input1;
	printf("enter one float value: ");
	scanf("%f", &input1);
	printf("incremented value is: %f\n", ++ input1);
	printf("decremented value is: %f\n", -- input1);
	return 0;
}
