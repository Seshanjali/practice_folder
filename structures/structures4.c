#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct rect
{
	struct point pt1;
	struct point pt2;
};

int main ()
{
	struct point p1 = {10, 20};
	struct point p2 = {15, 25};
	struct rect ex;
	ex.pt1 = p1;
	ex.pt2 = p2;
	printf("%d\n", ex.pt1.y);
	return 0;
}
