//logical operators for double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	int result;
	printf("enter two double values:\n");
	scanf("%lf %lf", &input1, &input2);
	result = (input1 && input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	result = (input1 || input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	printf("result for ! operation for input1: %d\n", !(input1));
	printf("result for ! operation for input2: %d\n", !(input2));
	return 0;
}
