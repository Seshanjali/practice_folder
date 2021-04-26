//ternary operator on int type values

#include <stdio.h>

int main ()
{
	int input1;
	int result;
	printf("enter one integer value: ");
	scanf("%d", &input1);
	result = (input1) ? printf("positive") : printf("negative");
	return 0;
}
