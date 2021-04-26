//main() to access all the functions that are used to 
//understand storage class specfiers

#include "header.h"

static int A;
static int B;
static int E;

int main ()
{	
	function1();
	function2();
	function3();
	function4();
	function5();
	return 0;
}

int function2 ()
{
	A = 10;
	printf("%d %d %d\n", A, B, E);
	return 0;
}
