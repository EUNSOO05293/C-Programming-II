#include <stdio.h>

typedef struct point {
	int x;
	int y;
} Point;

void* swap(Point* pa, Point* pb) {
	if (pa == NULL || pb == NULL) {
		return NULL;
	}
	Point temp = *pa;
	*pa = *pb;
	*pb = temp;

	return pa;
}

Point mul10(Point pt) {
	Point pr = { 0 };
	pr.x = pt.x * 10;
	pr.y = pt.y * 10;

	return pr;
}

int test_point() {
	Point pa = { 1,2 };
	Point pb = { 3,4 };
	Point p3 = { 0 };

	p3 = mul10(pa);

	return 0;
}
