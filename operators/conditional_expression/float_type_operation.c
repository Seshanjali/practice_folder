//conditional expression on float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	int result;
	printf("enter two float values\n");
	scanf("%f %f", &input1, &input2);
	result = input1 > input2 ? printf("%f is greater\n", input1) :
				 printf("%f is greater\n", input2);
	return 0;
}
