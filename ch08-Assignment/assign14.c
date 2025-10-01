/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ������ �迭�� 1~(N-1)������ ������ ������ ä���ִ� rand_array �Լ��� �ۼ��Ͻÿ�.
 rand_array �Լ��� �̿��ϸ� ������ ���� 1���� ������ ���� �ְ� �迭 ũ�⸸ŭ ������ ���� �ִ�.
 �� �Լ��� 0~9������ ���� ������ count ������ ������ ����, 
 count����ŭ ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-09-15
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