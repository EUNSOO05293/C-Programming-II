/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 좌핟단점과 우상단점으로
 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다. 직사각형 정보를 출력하는 print_rect
 함수를 정의하고, RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
 날짜: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Point {
	int x;
	int y;
};
struct Rect {
	struct Point left_bottom;
	struct Point right_top;
};

void manageRect();
int main() {
	manageRect();
	return 0;
}
void manageRect() {
	struct Rect box;
	printf("직사각형의 좌하단점 좌표(x y)? ");
	scanf("%d %d", &box.left_bottom.x, &box.left_bottom.y);
	printf("직사각형의 우상단점 좌표(x y)? ");
	scanf("%d %d", &box.right_top.x, &box.right_top.y);
	printf("[RECT 좌하단점:(%d,%d) 우상단점:(%d,%d)]\n", box.left_bottom.x, box.left_bottom.y, box.right_top.x, box.right_top.y);
}