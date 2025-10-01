/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소중 최댓값을 가진 원소와
 최소값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오. 배열의 초기 값은 마음대로 정하시오.
 날짜: 2025.09.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(int arr[], int size);

int main() {
	int arr[10] = { 23,45,62, 12, 99,83 ,23, 50, 72,37 };

	Arr(arr, 10);

	return 0;
}

void Arr(int arr[], int size) {
	int max = arr[0], min = arr[0], maxIndex = 0, minIndex = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	printf("최대값: %d (인덱스 %d\n", max, maxIndex);
	printf("최소값: %d (인덱스 %d\n", min, minIndex);
}