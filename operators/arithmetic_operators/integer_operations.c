//arithematic operations for integer data type values

#include <stdio.h>

int main ()
{
	int input1;
	int input2;
	printf("enter two integer values for operation:\n");
	scanf("%d %d", &input1, &input2);
	printf("addition value : %d\n", input1 + input2);
	printf("subtraction value: %d\n", input1 - input2);
	printf("multiplication value: %d\n", input1 * input2);
	printf("division value: %d\n", input1 / input2);
	printf("mod value: %d\n", input1 % input2);
	return 0;
}
