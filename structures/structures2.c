#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

struct person
{
	char *name;
	int age;
	char *address;
	unsigned long int mobile_number;
};

int inputs_read(struct person *, int);
int printing(struct person *, int);

int main ()
{
	int n;
	int i;
	printf("enter no. of persons data need to enter\n");
	scanf("%d", &n);
	struct person *p;
	p = (struct person *) malloc(sizeof(struct person) * n);
	
	inputs_read(p, n);

	printing(p, n);

	return 0;
}

int inputs_read (struct person *p, int n) 
{
	int i = n + 1;
	while (n > 0) {
		p -> name = (char *) malloc(sizeof(char) * 10);
		printf("name of person %d\n", i - n);
		__fpurge(stdin);
		fgets(p -> name, 10, stdin);
		printf("age\n");
		__fpurge(stdin);
		scanf("%d", &p -> age);
		p -> address = (char *) malloc(sizeof(char) * 10);
		printf("address\n");
		__fpurge(stdin);
		fgets(p -> address, 10, stdin);
		printf("mobile_number\n");
		__fpurge(stdin);
		scanf("%ld", &p -> mobile_number);
		n--;
		p++;
	}
	return 0;
}

int printing (struct person *p, int n)
{
	while (n > 0) {
		printf("%s\t%d\t%s\t%ld\n", p->name, p->age, p->address, p->mobile_number);
		n --;
		p ++;
	}
	return 0;
}
