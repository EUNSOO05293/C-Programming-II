/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 크기가 같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는 swap_array 함수를 작성하시오.
 swap_array 함수를 이용해서 크기가 10인 두 배열의 값을 맞바꾸는 프로그램을 작성하시오.
 날짜: 2025-09-15
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

	printf("\n\n<< swap_array 호출 후 >>\n");
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