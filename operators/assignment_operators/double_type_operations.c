//assignment operators on double type values

#include <stdio.h>

int main ()
{
	double input1;
	double input2;
	printf("enter two double values: ");
	scanf("%lf %lf", &input1, &input2);
	printf("%lf is result of +=\n", (input1 += input2));
	printf("%lf is result of -=\n", (input1 -= input2));
	printf("%lf is result of *=\n", (input1 *= input2));
	printf("%lf is result of /=\n", (input1 /= input2));
/*	printf("%lf is result of %=\n", (input1 %= input2));
	printf("%lf is result of <<=\n", (input1 <<= input2));
	printf("%lf is result of >>=\n", (input1 >>= input2));
	printf("%lf is result of &=\n", (input1 &= input2));
	printf("%lf is result of ^=\n", (input1 ^= input2));
	printf("%lf is result of |=\n", (input1 |= input2)); */
	return 0;
}
