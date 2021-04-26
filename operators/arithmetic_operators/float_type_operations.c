// arithmetic operations on float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	printf("enter two float values for operation\n");
	scanf("%f %f", &input1, &input2);
	printf("the result of addition : %f\n", input1 + input2);
	printf("the result of subtraction : %f\n", input1 - input2);
	printf("the result of multiplication : %f\n", input1 * input2);
	printf("the result of division : %f\n", input1 / input2);
//	printf("the result of mod : %f\n", input1 % input2);
	return 0;
}
