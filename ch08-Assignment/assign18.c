/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: add_to_set �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���Ҹ� �߰��ϰ�,
 �ߺ� �� �ش� �ε����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void run();
int add(int* a, int s, int* c, int n);
void print(int* a, int c);

int main() {
	run();
	return 0;
}

void run() {
	int a[SIZE];
	int c = 0;
	int n;
	int r;

	while (c < SIZE) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &n);

		r = add(a, SIZE, &c, n);

		if (r == 1) {
			print(a, c);
		}
		else if (r <= -2) {
			int index = -r - 2;
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", index);
			print(a, c);
		}
	}
}

int add(int* a, int s, int* c, int n) {
	int i;

	if (*c >= s) {
		return -1;
	}

	for (i = 0; i < *c; i++) {
		if (a[i] == n) {
			return -(i + 2);
		}
	}

	a[*c] = n;
	(*c)++;
	return 1;
}

void print(int* a, int c) {
	int i;
	for (i = 0; i < c; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}