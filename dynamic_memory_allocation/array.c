#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main ()
{
	int j = 0;
	int *array = (int *) malloc (SIZE * sizeof(int));
	for (int i = 0; *(array + j) != '\n'; i++) {
		printf("enter value\n"); 
		scanf("%d", array + i);
		printf("%d\n", *(array + i));
	}
	return 0;
}
