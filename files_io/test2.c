#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio_ext.h>
#define SIZE 50

int main ()
{
	int fd;
	int size;
	char *content = (char *) malloc(sizeof(char) * SIZE);
	printf("enter content\n");
	__fpurge(stdin);
	fgets(content, SIZE, stdin);
	for (size = 0; *(content + size) != '\0'; size++);
	printf("%d\n", size);
	char reading[size];
	fd = open("anjali1", O_RDWR | O_CREAT, S_IRWXU);
	write(fd, content, size-1);
	lseek(fd, 0, SEEK_SET);
	read(fd, reading, size-1);
	reading[size - 1] = '\0';
	printf("%s", reading);
	close(fd);
	free(content);
	return 0;
}
