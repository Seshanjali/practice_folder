#include "swap_bits_within.h"

int main ()
{
	char snumber[SIZE];
	char source[SIZE];
	char dest[SIZE];
	unsigned int s;
	unsigned int d;
	unsigned int snum;
	int repeat = 1;
	while (repeat) {
		printf("enter integer value\n");
		fgets(snumber, SIZE, stdin);
		snum = integer_validation(snumber);
		if (snum) {
			snum = integer_conversion(snumber);
			bit_conversion(snum);
			repeat = 0;
		} 
	}
	repeat++;
	while (repeat) {
		printf("enter source value\n");
		fgets(source, SIZE, stdin);
		s = integer_validation(source);
		if (s) {
			s = integer_conversion(source);
			repeat = 0;
		}
	}
	repeat = 1;
	while (repeat) {
		printf("enter destination value\n");
		fgets(dest, SIZE, stdin);
		d = integer_validation(dest);
		if (d) {
			d = integer_conversion(dest);
			repeat = 0;
		}
	}
	snum = swap_bits_within(snum, s, d);
	bit_conversion(snum);
	return 0;
}
