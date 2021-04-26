#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main ()
{
	int fd;
	int size;
	char content[] = "My name is Anjali";
	size = sizeof(content);
	char reading[size];
	fd = open("anjali", O_RDWR | O_CREAT, S_IRWXU);
	write(fd, content, size-1);
	lseek(fd, 0, SEEK_SET);
	read(fd, reading, size-1);
	reading[size - 1] = '\0';
	printf("%s", reading);
	close(fd);
	return 0;
}
