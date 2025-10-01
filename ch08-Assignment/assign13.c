/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ũ�Ⱑ ���� 2���� ������ �迭�� �Ű������� ���޹޾� �� �迭�� ���ҵ��� ���� �¹ٲٴ� swap_array �Լ��� �ۼ��Ͻÿ�.
 swap_array �Լ��� �̿��ؼ� ũ�Ⱑ 10�� �� �迭�� ���� �¹ٲٴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-09-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void swap_array(int* a, int* b);
void run_swap();

int main() {
	run_swap();
	return 0;
}

void swap_array(int* a, int* b) {
	int i, t;

	for (i = 0; i < SIZE; i++) {
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
}


void run_swap() {
	int a[SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int i;

	printf("a:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", a[i]);
	}
	printf("\nb:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", b[i]);
	}

	printf("\n\n<< swap_array ȣ�� �� >>\n");
	swap_array(a, b);

	printf("a:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", a[i]);
	}
	printf("\nb:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", b[i]);
	}
	printf("\n");
}