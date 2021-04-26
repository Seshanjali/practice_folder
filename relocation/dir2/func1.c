#include <stdio.h>

extern int num;

int function1 ()
{	num = 20;	
	int val;
	printf("%d\n", num);
	printf("%d\n", val);
	return 0;
}
