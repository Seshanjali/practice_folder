#include "header.h"

int compare (char *string1, char *string2)
{
	char *ptr1;
	char *ptr2;
	ptr1 = string1;
	ptr2 = string2;
	while (*ptr1 != 10 && *ptr1 != '\0' && *ptr2 != 10 && *ptr2 != '\0') {
		if (*(ptr1 + 1) == 10 || *(ptr1 + 1) == '\0') {
//			printf("string1 is end\n");
			return 0;
		} else if (*(ptr2 + 1) == 10 || *(ptr2 + 1) == '\0') {
//			printf("string2 is end\n");
			return 1;
		} else if (*(ptr1 + 1) == *(ptr2 + 1)) {
			ptr1++;
			ptr2++;
		} else if (*(ptr1 + 1) > *(ptr2 + 1)) {
			return 1;
		} else {
			return 0;
		}
	}
	return 0;
}
		
