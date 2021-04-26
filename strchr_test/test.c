#include <stdio.h>
#include <string.h>

int main ()
{
	char chr[] = "killerbee";
	char c = 'l';
	printf("%s\n", strchr(chr, c));
	return 0;
}
