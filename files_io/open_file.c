#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main ()
{
	int fd;
	int r_no;
	int w_no;
	char content[100] = "hello asdsf";
	fd = open("file1",O_RDWR);
	if (fd == -1) {
		printf("can't open\n");
	} else {
		printf("open\n");
		r_no = read(fd, content, sizeof(content));
			if (write(fd, content, r_no) != r_no) {
				printf("coudn't write\n");
			} else {
				printf("write\n");
			}
	}
	return 0;
}
