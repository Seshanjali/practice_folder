//logical operators for char type values

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	char result;
	printf("enter two characters:\n");
	scanf("%c %c", &input1, &input2);
	result = (input1 && input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	result = (input1 || input2) ? 1 : 0;
	printf("the result is: %d\n", result);
	printf("result for ! operation for input1: %d\n", !(input1));
	printf("result for ! operation for input2: %d\n", !(input2));
	return 0;
}
