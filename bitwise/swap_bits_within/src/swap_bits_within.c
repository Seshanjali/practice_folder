#include "swap_bits_within.h"

unsigned int swap_bits_within (unsigned int n, unsigned int s, unsigned int d)
{
	if (((n & (1 << s)) >> s) != ((n & (1 << d)) >> d)) {
		n = n ^ (1 << s);
		n = n ^ (1 << d);
	}
	return n;
}
	
