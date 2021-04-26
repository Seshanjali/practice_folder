#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

struct d
{
	int *p;
	char ch;
	short int sh;
};

struct c
{
	char *name;
	struct d *dt;
};

struct b
{
	int num;
	struct c ct;
};

struct a 
{
	int *a;
	struct b *bt;
};

int main ()
{
	struct a *ptr = (struct a *) malloc(sizeof(struct a));
	ptr->a = (int *) malloc(sizeof(int));
	*(ptr->a) = 30;
	ptr->bt = (struct b *) malloc(sizeof(struct b));
	ptr->bt->num = 10;
	ptr->bt->ct.name = (char *) malloc(sizeof(char) * 10);
	__fpurge(stdin);
	printf("name in c\n");
	fgets(ptr->bt->ct.name, 10, stdin);
	ptr->bt->ct.dt = (struct d *) malloc(sizeof(struct d));
	ptr->bt->ct.dt->p = (int *) malloc(sizeof(int));
	*(ptr->bt->ct.dt->p) = 20;
	ptr->bt->ct.dt->ch = 's';
	ptr->bt->ct.dt->sh = 23;

	
	printf("a in a: %d\tnum in b: %d\tname in c: %s p in d: %d \tch in d:%c \
			 sh in d:%d\n", *(ptr->a), ptr->bt->num, ptr->bt->ct.name,\
			 *(ptr->bt->ct.dt->p), ptr->bt->ct.dt->ch,\
			 ptr->bt->ct.dt->sh);
	
	free(ptr->bt->ct.dt->p);
	free(ptr->bt->ct.dt);
	free(ptr->bt->ct.name);
	free(ptr->bt);
	free(ptr->a);
	free(ptr);
	return 0;
}	
