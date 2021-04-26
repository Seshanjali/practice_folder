#include <stdio.h>

#if 0

struct {};  //warning

#endif
struct anjali{
	int x;
	int y;	
 };

/*inside main

	struct anjali{
		int x;
		int y;	
 	} i;*/
//	i.x = 10;
//	i.y = 23;

#if 0
struct {
	int x;
	int y;
};  //warning
#endif
int main ()
{
	printf("hii\n");
	struct anjali i;
	scanf ("%d%d", &i.x, &i.y);
	printf("%d %d\n", i.x, i.y);
	return 0;
}	
