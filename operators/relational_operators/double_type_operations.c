// relational operations on double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	double result;
	printf("enter two double type values for operation\n");
	scanf("%lf %lf", &input1, &input2);
	result = input1 > input2 ? input1 : input2;
	printf("%lf is the result\n", result);
	result = input1 >= input2 ? input1 : input2;
	printf("%lf is the result\n", result);
	result = input1 < input2 ? input1 : input2;
	printf("%lf is the result\n", result);
	result = input1 <= input2 ? input1 : input2;
	printf("%lf is the result\n", result);
	result = (input1 == input2) ? input1 : input2;
	printf("%lf is the result\n",result);
	result = (input1 != input2) ? input1 : input2;
	printf("%lf is the result\n", result);
	return 0;
}
