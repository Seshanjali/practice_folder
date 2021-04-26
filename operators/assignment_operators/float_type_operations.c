//assignment operators on float type values

#include <stdio.h>

int main ()
{
	float input1;
	float input2;
	printf("enter two float values: ");
	scanf("%f %f", &input1, &input2);
	printf("%f is result of +=\n", (input1 += input2));
	printf("%f is result of -=\n", (input1 -= input2));
	printf("%f is result of *=\n", (input1 *= input2));
	printf("%f is result of /=\n", (input1 /= input2));
/*	printf("%f is result of %=\n", (input1 %= input2));
	printf("%f is result of <<=\n", (input1 <<= input2));
	printf("%f is result of >>=\n", (input1 >>= input2));
	printf("%f is result of &=\n", (input1 &= input2));
	printf("%f is result of ^=\n", (input1 ^= input2));
	printf("%f is result of |=\n", (input1 |= input2));*/
	return 0;
}
