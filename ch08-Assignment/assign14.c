/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 정수형 배열을 1~(N-1)사이의 임의의 정수로 채워주는 rand_array 함수를 작성하시오.
 rand_array 함수를 이용하면 임의의 정수 1개를 생성할 수도 있고 배열 크기만큼 생성할 수도 있다.
 이 함수로 0~9사이의 값을 생성해 count 변수에 저장한 다음, 
 count번만큼 크기가 10인 int 배열에 0~99사이의 임의의 정수를 채우고 출력하는 프로그램을 작성하시오.
 날짜: 2025-09-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
void fill_and_print_array(int* arr, int size);
void execute_rand();

int main(void) {
	srand((unsigned)time(NULL));
	execute_rand();
	return 0;
}

void fill_and_print_array(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}
	printf("\n");
}

void execute_rand() {
	int arr[SIZE];
	int count;
	int i;

	count = rand() % 10;
	printf("count = %d\n", count);
	printf("--------------------\n");

	for (i = 0; i < count; i++) {
		fill_and_print_array(arr, SIZE);
	}
}