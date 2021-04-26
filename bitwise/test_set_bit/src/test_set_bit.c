#include "test_set_bit.h"

int main ()
{
	char number[SIZE];
	char position[SIZE];
	unsigned int num;
	unsigned int pos;
	int repeat = 1;
	while (repeat) {
		printf("enter integer value\n");
		fgets(number, SIZE, stdin);
		num = integer_validation(number);
		if (num) {
			repeat = 0;
		} 
	}
	repeat++;
	while (repeat) {
		printf("enter position to set\n");
		fgets(position, SIZE, stdin);
		pos = integer_validation(position);
		if (pos) {
			repeat = 0;
		}
	}
	num = TEST_SET_BIT(num, pos);	
	bit_conversion(num);
	printf("%d\n", num);
	return 0;
}
