#include <stdio.h>

struct example 
{
	int x;
	int y;
};

int main ()
{
	struct example anjali, *ex;
	ex = &anjali;
//	(ex)->x = 10;
//	(ex)->y = 20;
//		or
	(*ex).x = 10;
	(*ex).y = 20;
	printf("hello  %d %d\n", ex->x, ex->y);	
	return 0;
}
