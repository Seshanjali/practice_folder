//Bit wise operators performed on char type values

#include <stdio.h>

int main ()
{
	char input1;
	char input2;
	printf("enter two characters:\n");
	scanf("%c %c", &input1, &input2);
	printf("%c is the result of & operation\n", (input1 & input2));
	printf("%c is the result of | operation\n", (input1 | input2));
	printf("%c is the result of ^ operation\n", (input1 ^ input2));
	printf("%c is the result of << on input1 by 1\n", (input1 << 1));
	printf("%c is the result of >> on input1 by 1\n", (input1 >> 1));
	printf("%c is the result of ~ on input1\n", (~ input1));
	printf("%c is the result of ~ on input2\n", (~ input2));
	return 0;
}
