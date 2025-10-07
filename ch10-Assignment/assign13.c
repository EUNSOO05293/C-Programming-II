/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���������� ����������
 �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect
 �Լ��� �����ϰ�, RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-10-07
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
	printf("���簢���� ���ϴ��� ��ǥ(x y)? ");
	scanf("%d %d", &box.left_bottom.x, &box.left_bottom.y);
	printf("���簢���� ������ ��ǥ(x y)? ");
	scanf("%d %d", &box.right_top.x, &box.right_top.y);
	printf("[RECT ���ϴ���:(%d,%d) ������:(%d,%d)]\n", box.left_bottom.x, box.left_bottom.y, box.right_top.x, box.right_top.y);
}