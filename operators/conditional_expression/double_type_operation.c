//conditional expression on double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	int result;
	printf("enter two double values\n");
	scanf("%lf %lf", &input1, &input2);
	result = input1 > input2 ? printf("%lf is greater\n", input1) :
				 printf("%lf is greater\n", input2);
	return 0;
}
