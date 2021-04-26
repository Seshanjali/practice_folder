
//! arithmetic operations on char type values

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	printf("enter two characters for operation\n");
	scanf("%c %c", &input1, &input2);
	printf("the result of addition : %d\n", input1 + input2);
	printf("the result of subtraction : %d\n", input1 - input2);
	printf("the result of multiplication : %d\n", input1 * input2);
	printf("the result of division : %d\n", input1 / input2);
	printf("the result of mod : %d\n", input1 % input2);
	return 0;
}
