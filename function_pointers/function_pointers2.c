#include <stdio.h>

float add(float, float);
float sub(float, float);
int calling(float, float, float (*)(float, float));

/*float add (float a, float b)
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
}*/

int main ()
{
	int choice;
	float a;
	float b;
	printf("enter 0 add and 1 to sub\n");
	scanf("%d", &choice);
	printf("enter a and b values\n");
	scanf("%f%f", &a, &b);
	if (choice) {
		calling(a, b, sub);
	} else {
		calling(a, b, add);
	}
	return 0;
}
