//Bit wise operators performed on int type values

#include <stdio.h>

int main ()
{
	int input1;
	int input2;
	printf("enter two integer values:\n");
	scanf("%d %d", &input1, &input2);
	printf("%d is the result of & operation\n", (input1 & input2));
	printf("%d is the result of | operation\n", (input1 | input2));
	printf("%d is the result of ^ operation\n", (input1 ^ input2));
	printf("%d is the result of << on input1 by 1\n", (input1 << 1));
	printf("%d is the result of >> on input1 by 1\n", (input1 >> 1));
	printf("%d is the result of ~ on input1\n", (~ input1));
	printf("%d is the result of ~ on input2\n", (~ input2));
	return 0;
}
