#include "header.h"

unsigned int copy_bits (unsigned int snum, unsigned int dnum, unsigned int n,\
							 unsigned int s, unsigned int d) {
	int mask = 0;
	int s1 = s;
	if ((s >= n-1) && (d >= n-1)) {
		for (;n > 0; n--,s1--) {
			mask = mask | (1 << s1);
		}
		snum = snum & mask;
		if (s > d) {
		mask = mask >> (s - d);
		snum = snum >> (s - d);
		} else {
		mask = mask << (d - s);
		snum = snum << (d - s);
		}
		dnum = (snum | (dnum & (~mask)));
		return dnum;
	} else {
		printf("invalid\n");
	}		
}
