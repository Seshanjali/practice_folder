//writing the entire stucture into file at once and reading the file content
//and printing

#include <stdio.h>
#define SIZE 50
#define N_SIZE 10

struct employee
{
	char name[N_SIZE];
	int age;
	char gender;
	int empid;
};
//passing input file using command line arguments
int main (int argc, char *argv[])
{
	struct employee emp1;
	struct employee emp = {"anjali", 20, 'F', 31482};
	FILE *fp;
	char buff[SIZE];
	fp = fopen(argv[1] , "w+");
//fwrite placing the contents into the file in binary formate
//here passing the address of emp so we mention &
//without &, its a variable of type (struct employee)
 
	fwrite(&emp, sizeof(emp), 1, fp);
	fseek(fp, 0, SEEK_SET);
//fread reads as binary content from the file
//passing the address of emp1 using &
// because its a variable of type (stucture employee)

	fread(&emp1, sizeof(emp), 1, fp);
	printf("%s %d %c %d\n", emp1.name, emp1.age, emp1.gender, emp1.empid);
	fclose(fp);
	return 0;
}
	
