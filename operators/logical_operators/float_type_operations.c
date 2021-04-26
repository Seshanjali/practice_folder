//logical operators for float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	int result;
	printf("enter two float values:\n");
	scanf("%f %f", &input1, &input2);
	result = (input1 && input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	result = (input1 || input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	printf("result for ! operation for input1: %d\n", !(input1));
	printf("result for ! operation for input2: %d\n", !(input2));
	return 0;
}
