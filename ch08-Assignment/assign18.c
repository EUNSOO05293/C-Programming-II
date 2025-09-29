/*
 학번: 202511228
 이름: 이은수
 프로그램 명: add_to_set 함수를 이용해서 입력받은 정수를 집합의 원소를 추가하고,
 중복 시 해당 인덱스를 출력하는 프로그램을 작성하시오.
 날짜: 2025-09-15
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
		printf("배열에 추가할 원소? ");
		scanf("%d", &n);

		r = add(a, SIZE, &c, n);

		if (r == 1) {
			print(a, c);
		}
		else if (r <= -2) {
			int index = -r - 2;
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", index);
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