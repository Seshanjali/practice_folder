#include <stdio.h>

struct person
{
	char name[10];
	int age;
	char address[10];
	unsigned long int mobile_number;
};

int main ()
{
	struct person person1 = {"anjali", 0, "add", 0};
	 
	printf("name %s age %d address %s mobile_number %ld\n", person1.name, person1.age, person1.address, person1.mobile_number);
	return 0;
}
