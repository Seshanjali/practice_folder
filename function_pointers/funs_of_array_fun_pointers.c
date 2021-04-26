#include <stdio.h>

float a;
float b;

float add ()
{
	printf("enter a and b values to add\n");
	scanf("%f%f", &a, &b);
	return (a + b);
}

float sub ()
{
	printf("enter a and b values to sub\n");
	scanf("%f%f", &a, &b);
	return (a - b);
}
