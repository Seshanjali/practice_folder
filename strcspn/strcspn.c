#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define SIZE 50

int main ()
{
	char *string1 = (char *) malloc (SIZE * sizeof (char));
	char *string2 = (char *) malloc (SIZE * sizeof (char));
	int length;
	fgets (string1, 10, stdin);

	fgets (string2, 10, stdin);

	length = strcspn(string1, string2);
	printf("%d\n", length);
	return 0;
}
