#include "swap_bits_between.h"

int bit_conversion (int number) {
	int mask = (1 << 7);
	while (mask) {
		if (number & mask) {
			printf("1");
		} else {
			printf("0");
		}
		mask = mask >> 1;
	}
	printf("\n");
	return 0;
}	
