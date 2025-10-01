/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 7장의 선택 정렬 코드를 이용해서 정수형 배열을 정렬하는 sort_array 함수를 정의하시오.
 크기가 10인 int 배열에 0~99사이의 임의의 정수를 채운 다음 sort_array 함수로 정렬한 결과를 출력하는 프로그램을 작성하시오.
 날짜: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void run_program();
void sort_array(int* a, int s);
void print_array(const char* title, int* a, int s);

int main(void) {
	srand((unsigned)time(NULL));
	run_program();
	return 0;
}

void run_program() {
	int arr[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
	}

	print_array("정렬 전:", arr, SIZE);
	sort_array(arr, SIZE);
	print_array("정렬 후:", arr, SIZE);
}

void sort_array(int* a, int s) {
	int i, j, t;

	for (i = 0; i < s - 1; i++) {
		for (j = i + 1; j < s; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
void print_array(const char* title, int* a, int s) {
	int i;
	printf("%s", title);
	for (i = 0; i < s; i++) {
		printf(" %2d", a[i]);
	}
	printf("\n");
}