// relational operations on char type values

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	char result;
	printf("enter two characters for operation\n");
	scanf("%c %c", &input1, &input2);
	result = input1 > input2 ? input1 : input2;
	printf("%c is the result\n", result);
	result = input1 >= input2 ? input1 : input2;
	printf("%c is the result\n", result);
	result = input1 < input2 ? input1 : input2;
	printf("%c is the result\n", result);
	result = input1 <= input2 ? input1 : input2;
	printf("%c is the result\n", result);
	result = (input1 == input2) ? input1 : input2;
	printf("%c is the result\n",result);
	result = (input1 != input2) ? input1 : input2;
	printf("%c is the result\n", result);
	return 0;
}
