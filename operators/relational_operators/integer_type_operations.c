// relational operations on int type values

#include <stdio.h>

int main ()
{
	int input1;
	int input2;
	int result;
	printf("enter two integers for operation\n");
	scanf("%d %d", &input1, &input2);
	result = input1 > input2 ? input1 : input2;
	printf("%d is the result\n", result);
	result = input1 >= input2 ? input1 : input2;
	printf("%d is the result\n", result);
	result = input1 < input2 ? input1 : input2;
	printf("%d is the result\n", result);
	result = input1 <= input2 ? input1 : input2;
	printf("%d is the result\n", result);
	result = (input1 == input2) ? input1 : input2;
	printf("%d is the result\n",result);
	result = (input1 != input2) ? input1 : input2;
	printf("%d is the result\n", result);
	return 0;
}
