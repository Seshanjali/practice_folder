#include <stdio.h>

float add (float a, float b)
{
	return (a + b);
}

float sub (float a, float b)
{
	return (a - b);
}

int calling(float a, float b, float (*fptr)(float, float))
{
	printf("%f\n", fptr(a, b));
	return 0;
}
