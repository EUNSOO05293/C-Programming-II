/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
 실수형 배열의 초기값은 마음대로 정하시오.
 날짜: 2025.09.15
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void floatArr(float arr[], int size);

int main() {
	int size = 10;
	float arr[10] = { 1.3, 4.1, 3.3, 7.4, 6.5, 4.9, 8.1, 4.6, 5.1, 2.3 };
	floatArr(arr, 10);
	return 0;
}

void floatArr(float arr[], int size) {
	int i;
	printf("배열: ");
	for (i = 0; i < size; i++) {
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	printf("역순 배열: ");
	for (i = size - 1; i >= 0; i--) {
		printf("%.1f ", arr[i]);
	}
}