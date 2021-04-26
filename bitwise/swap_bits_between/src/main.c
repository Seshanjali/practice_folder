#include "swap_bits_between.h"

int main ()
{
	char snumber[SIZE];
	char dnumber[SIZE];
	char source[SIZE];
	char dest[SIZE];
	unsigned int s;
	unsigned int d;
	unsigned int snum;
	unsigned int dnum;
	int repeat = 1;
	while (repeat) {
		printf("enter integer value\n");
		fgets(snumber, SIZE, stdin);
		snum = integer_validation(snumber);
		if (snum) {
			repeat = 0;
		} 
	}
	repeat++;
	while (repeat) {
		printf("enter position to set\n");
		fgets(dnumber, SIZE, stdin);
		dnum = integer_validation(dnumber);
		if (dnum) {
			repeat = 0;
		}
	}
	repeat = 1;
	while (repeat) {
		printf("enter source value\n");
		fgets(source, SIZE, stdin);
		s = integer_validation(source);
		if (s) {
			repeat = 0;
		}
	}
	repeat = 1;
	while (repeat) {
		printf("enter destination value\n");
		fgets(dest, SIZE, stdin);
		d = integer_validation(dest);
		if (d) {
			repeat = 0;
		}
	}
	swap_bits_between(snum, dnum, s, d);
	return 0;
}
