#include "test_set_bit.h"

int integer_validation (char string[]) {
	int index;
	int num;
	for (index = 0;(string[index] != '\0' && string[index] != 10); index++) {	
			if(!(string[index] >= '0' && string[index] <= '9')) {
				return 0;
			} 
	}
	num = integer_conversion(string);
	return num;
}	

int integer_conversion (char string[]) {
	int index;
	int number = 0;
	for (index = 0;(string[index] != '\0' && string[index] != 10); index++) {	
			number = (number * 10) + (string[index] - '0');
	}
	return number;
}
