#include "header.h"

int main ()
{
	int i;
	int j;
	int k;
	char ****array = malloc(sizeof(char ***) * 2);
	char ****ptr;
	char ***ptr1;
	char **ptr2;
	ptr = array;
	for (i = 0; i < 2; i++) {
		*ptr = malloc(sizeof(char **) * 2);
		ptr1 = *ptr;
		for (j = 0; j < 2; j++) {
			*ptr1 = malloc(sizeof(char *) * 2);
			ptr2 = *ptr1;
			for (k = 0; k < 2; k++) {
				*ptr2 = (char *) malloc(sizeof(char) * 10);
				printf("enter string\n");
				fgets(*ptr2, 10, stdin);
				ptr2++;
			}
			ptr1++;
		}
		ptr++;
	}
	printf("the first string is : %s\n", ***array);
	ptr = array;
	for (i = 0; i < 2; i++) {
		ptr1 = *ptr;
		for (int j = 0; j < 2; j++) {
			ptr2 = *(ptr1 + j);
			for (k = 0; k < 2; k++) {
				free(*(ptr2 + k));
			}
			free(*(ptr1 + j));
		}
		free(ptr1);
		ptr++;
	}
	free(array);
	return 0;
}
	
