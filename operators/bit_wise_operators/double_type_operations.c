//Bit wise operators performed on double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	printf("enter two double values:\n");
	scanf("%lf %lf", &input1, &input2);
	printf("%lf is the result of & operation\n", (input1 & input2));
	printf("%lf is the result of | operation\n", (input1 | input2));
	printf("%lf is the result of ^ operation\n", (input1 ^ input2));
	printf("%lf is the result of << on input1 by 1\n", (input1 << 1));
	printf("%lf is the result of >> on input1 by 1\n", (input1 >> 1));
	printf("%lf is the result of ~ on input1\n", (~ input1));
	printf("%lf is the result of ~ on input2\n", (~ input2));
	return 0;
}
