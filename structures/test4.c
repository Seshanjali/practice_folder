#include <stdio.h>
#include <stdio_ext.h>

static int size;

struct person
{
	char name[10];;
	int salery;
};

struct person *add_records(struct person *, int);

int main ()
{
	printf("enter no. of persons\n");
	scanf("%d", &size);
	struct person ex[size];
	for (int i = 0; i < size; i++) {
		scanf("%s %d",ex[i].name, &ex[i].salery);
	}
	//ex[size] = add_records(ex, size);
	if(add_records(ex, size))
		printf("Size is incremented\n");
	for (int i = 0; i < size; i++) {
		printf("%s %d\n", ex[i].name, ex[i].salery);
	}
	return 0;
}

struct person * add_records (struct person *ex, int  pre_size)
{
	static  int s;
	printf("how many persons to increase\n");
	scanf("%d",&s);
	size = size + s;
	for ( ; pre_size < size; pre_size ++) {
		scanf("%s", ex[pre_size].name);
		__fpurge(stdin);
		scanf("%d", &ex[pre_size].salery);
	}
	return ex; 
}
