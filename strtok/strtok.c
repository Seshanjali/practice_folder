#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <malloc.h>
#define SIZE 50

int main ()
{
	char *string1 = (char *) malloc (SIZE * sizeof (char));
	char *string2 = (char *) malloc (SIZE * sizeof (char));
	printf("enter first string\n");
	fgets (string1, 10, stdin);
	printf("enter second string\n");
	__fpurge(stdin);
	fgets (string2, 10, stdin);
	printf("%s", strtok(string1, string2));
	free(string1);
	free(string2);
	return 0;
}
