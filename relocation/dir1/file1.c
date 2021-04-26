#include <stdio.h>

int function();
extern int num;

int main ()
{
	printf("%d\n", num);
	function();
}	
