// relational operations on float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	float result;
	printf("enter two float valuess for operation\n");
	scanf("%f %f", &input1, &input2);
	result = input1 > input2 ? input1 : input2;
	printf("%f is the result\n", result);
	result = input1 >= input2 ? input1 : input2;
	printf("%f is the result\n", result);
	result = input1 < input2 ? input1 : input2;
	printf("%f is the result\n", result);
	result = input1 <= input2 ? input1 : input2;
	printf("%f is the result\n", result);
	result = (input1 == input2) ? input1 : input2;
	printf("%f is the result\n",result);
	result = (input1 != input2) ? input1 : input2;
	printf("%f is the result\n", result);
	return 0;
}
