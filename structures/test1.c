#include <stdio.h>

struct person
{
	char name[10];
};

int main ()
{
	struct person p;
//	p.name[0] = "kaa";// p.name = "name";  --> error
	p.name[1] = 'a';
	p.name[2] = 'v';
	printf("%s", p.name);
	return 0;
}
