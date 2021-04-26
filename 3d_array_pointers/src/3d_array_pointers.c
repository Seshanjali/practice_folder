#include "header.h"

int main ()
{
	int i;
	char ***array = malloc(sizeof(char **) * 2);
	char ***ptr;
	char **ptr1;
	ptr = array;
	for (i = 0; i < 2; i++) {
		*ptr = malloc(sizeof(char *) * 2);
		ptr1 = *ptr;
		for (int j = 0; j < 2; j++) {
			*ptr1 = (char *) malloc(sizeof(char) * 10);
			printf("enter string\n");
			fgets(*ptr1, 10, stdin);
			ptr1++;
		}
		ptr++;
	}
	printf("%s\n", **array);
	ptr = array;
	for (i = 0; i < 2; i++) {
		ptr1 = *ptr;
		for (int j = 0; j < 2; j++) {
			free(*(ptr1 + j));
		}
		free(ptr1);
		ptr++;
	}
	free(array);
	return 0;
}
	
