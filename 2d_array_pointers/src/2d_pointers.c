//2d pointers understanding

#include "header.h"

int main ()
{
	int i;
	char *ptr2;
	char **ptr1;
	char **array_pointer = (char **) malloc(sizeof(char *) * 3);
	ptr1 = array_pointer;
	for (i = 0; i < 3; i++) {
		*ptr1 = (char *) malloc(sizeof(char) * 10);
		printf("enter string\n");
		fgets(*(ptr1), 10, stdin);
		ptr1++;
	}
//	(*(*(array_pointer) + 0)) = 'h';
//	printf("%s\n", *(array_pointer));
//	printf("%s\n", *(*array_pointer));
	//before sort
	
	printf("\nthe strings before sorting\n");
	for (i = 0; i < 3; i++) {
		printf("%s", *(array_pointer + i));
	}

	//sorting strings
	
	ptr1 = array_pointer;
	for (i = 0; i < 2; i ++) {
		for (int j = i + 1; j < 3; j ++) {
			if (**(ptr1 + i) == **(ptr1 + j)) {
//				printf("%c and %c strings equal\n", **(ptr1 + i), **(ptr1 + j));
				if (compare(*(ptr1 + i), *(ptr1 + j))) {
//					printf("string equal greater\n");
					ptr2 = *(ptr1 + i);
					*(ptr1 + i) = *(ptr1 + j);
					*(ptr1 + j) = ptr2;
				} 
			} else if (**(ptr1 + i) > **(ptr1 + j)) {
//					printf("%c and %c string greater\n", **(ptr1 + i), **(ptr1 + j));
					ptr2 = *(ptr1 + i);
					*(ptr1 + i) = *(ptr1 + j);
					*(ptr1 + j) = ptr2;
				} else {
//				printf("strings are in order\n");
			} 
		}
	}
	printf("\nthe strings after sorting\n");
	for (i = 0; i < 3; i++) {
		printf("%s", *(array_pointer + i));
	}
	for (i = 0; i < 3; i++) {
		free(*(array_pointer + i));
	}
	free(array_pointer);
	return 0;
}
