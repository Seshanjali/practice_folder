//assignment operators on int type values

#include <stdio.h>

int main ()
{
	int input1;
	int input2;
	printf("enter two integer values: ");
	scanf("%d %d", &input1, &input2);
	printf("%d is result of +=\n", (input1 += input2));
	printf("%d is result of -=\n", (input1 -= input2));
	printf("%d is result of *=\n", (input1 *= input2));
	printf("%d is result of /=\n", (input1 /= input2));
//	printf("%d is result of %=\n", (input1 %= input2));
	printf("%d is result of <<=\n", (input1 <<= input2));
	printf("%d is result of >>=\n", (input1 >>= input2));
	printf("%d is result of &=\n", (input1 &= input2));
	printf("%d is result of ^=\n", (input1 ^= input2));
	printf("%d is result of |=\n", (input1 |= input2));
	return 0;
}
