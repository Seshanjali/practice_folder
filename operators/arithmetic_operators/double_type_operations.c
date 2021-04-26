// arithmetic operations on double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	printf("enter two double values for operation\n");
	scanf("%lf %lf", &input1, &input2);
	printf("the result of addition : %lf\n", input1 + input2);
	printf("the result of subtraction : %lf\n", input1 - input2);
	printf("the result of multiplication : %lf\n", input1 * input2);
	printf("the result of division : %lf\n", input1 / input2);
//	printf("the result of mod : %lf\n", input1 % input2);
	return 0;
}
