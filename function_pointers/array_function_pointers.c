#include <stdio.h>

float add();
float sub();

int main ()
{
	int choice;
	float (*fptr[])() = {add, sub};
	printf("enter 0 to add and 1 to sub\n");
	scanf("%d", &choice);
	printf("%f\n", fptr[choice]());
	return 0;
}
