//increment and decrement operators for double type values

#include <stdio.h>

int main ()
{
	double input1;
	printf("enter one double value: ");
	scanf("%lf", &input1);
	printf("incremented value is: %lf\n", ++ input1);
	printf("decremented value is: %lf\n", -- input1);
	return 0;
}
