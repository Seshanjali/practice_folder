#include "swap_bits_between.h"

int swap_bits_between (unsigned int snum, unsigned int dnum, unsigned int s,\
						 unsigned int d) {
	if (((snum & (1 << s)) >> s) != ((dnum & (1 << d)) >> d)) {
		snum = snum ^ (1 << s);
		dnum = dnum ^ (1 << d);
	}
	printf("snum-%d, dnum-%d\n", snum, dnum);
	bit_conversion(snum);
	bit_conversion(dnum);
}
