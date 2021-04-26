#include "copy_bits.h"

int main ()
{
	char snumber[SIZE];
	char dnumber[SIZE];
	char source[SIZE];
	char dest[SIZE];
	char number[SIZE];
	unsigned int s;
	unsigned int d;
	unsigned int dnum;
	unsigned int snum;
	unsigned int n;
	int repeat = 1;
	while (repeat) {
		printf("enter source number\n");
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
		printf("enter deestination number\n");
		fgets(dnumber, SIZE, stdin);
		dnum = integer_validation(dnumber);
		if (dnum) {
			dnum = integer_conversion(dnumber);
			bit_conversion(dnum);
			repeat = 0;
		} 
	}
	repeat++;
	
	while (repeat) {
		printf("enter s positon value\n");
		fgets(source, SIZE, stdin);
		s = integer_validation(source);
		if (s) {
			s = integer_conversion(source);
			repeat = 0;
		}
	}
	repeat = 1;
	while (repeat) {
		printf("enter d position value\n");
		fgets(dest, SIZE, stdin);
		d = integer_validation(dest);
		if (d) {
			d = integer_conversion(dest);
			repeat = 0;
		}
	}
	repeat = 1;
	while (repeat) {
		printf("enter no. of bits\n");
		fgets(number, SIZE, stdin);
		n = integer_validation(number);
		if (n) {
			n = integer_conversion(number);
			repeat = 0;
		} 
	}
	dnum = copy_bits(snum, dnum, n, s, d);
	bit_conversion(dnum);
	return 0;
}
