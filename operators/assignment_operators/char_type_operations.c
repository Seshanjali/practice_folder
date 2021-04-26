//assignment operators on char type values

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	printf("enter two characters: ");
	scanf("%c %c", &input1, &input2);
	printf("%c is result of +=\n", (input1 += input2));
	printf("%c is result of -=\n", (input1 -= input2));
	printf("%c is result of *=\n", (input1 *= input2));
	printf("%c is result of /=\n", (input1 /= input2));
//	printf("%c is result of %=\n", (input1 %= input2));
	printf("%c is result of <<=\n", (input1 <<= 2));
	printf("%c is result of >>=\n", (input1 >>= 1));
	printf("%c is result of &=\n", (input1 &= input2));
	printf("%c is result of ^=\n", (input1 ^= input2));
	printf("%c is result of |=\n", (input1 |= input2));
	return 0;
}
