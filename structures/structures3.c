#include <stdio.h>
#include <stdlib.h>

struct employee
{
	char *name;
	char *address;
	int *salery;
};

int main ()
{
//	struct employee anjali = {"anjali", "nellore", 0};
//	struct employee aaa = { "aaa", "sqas", 2};

	struct employee anjali;
	struct employee aaa;
	anjali.name = (char *) malloc(sizeof(char) * 10);

	printf("name of first employee\n");
	fgets(anjali.name, 10, stdin);
	anjali.address = (char *) malloc(sizeof(char) * 10);
	printf("address\n");
	fgets(anjali.address, 10, stdin);

	aaa.name = (char *) malloc(sizeof(char) * 10);
	printf("name of second employee\n");
	fgets(aaa.name, 10, stdin);
	aaa.address = (char *) malloc(sizeof(char) * 10);
	printf("address\n");
	fgets(aaa.address, 10, stdin);

	printf("salery of first employee\n");
	anjali.salery = (int *) malloc(sizeof(int));
	scanf("%d", anjali.salery);
	printf("salery of second employee\n");
	aaa.salery = (int *) malloc(sizeof(int));
	scanf("%d", aaa.salery);

	printf("%s\t%s\t%d\n", anjali.name, anjali.address, *anjali.salery);
	printf("%s\t%s\t%d\n", aaa.name, aaa.address, *aaa.salery);
	return 0;
}	
