//conditional expression on char type input

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	int result;
	printf("enter two characters\n");
	scanf("%c %c", &input1, &input2);
	result = (input1 > input2) ? printf("%c is greater\n", input1) : printf("%c is greater\n", input2);
	return 0;
}
