//Bit wise operators performed on float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	printf("enter two double values:\n");
	scanf("%f %f", &input1, &input2);
	printf("%f is the result of & operation\n", (input1 & input2));
	printf("%f is the result of | operation\n", (input1 | input2));
	printf("%f is the result of ^ operation\n", (input1 ^ input2));
	printf("%f is the result of << on input1 by 1\n", (input1 << 1));
	printf("%f is the result of >> on input1 by 1\n", (input1 >> 1));
	printf("%f is the result of ~ on input1\n", (~ input1));
	printf("%f is the result of ~ on input2\n", (~ input2));
	return 0;
}
