/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: 7���� ���� ���� �ڵ带 �̿��ؼ� ������ �迭�� �����ϴ� sort_array �Լ��� �����Ͻÿ�.
 ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä�� ���� sort_array �Լ��� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-09-15
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

	print_array("���� ��:", arr, SIZE);
	sort_array(arr, SIZE);
	print_array("���� ��:", arr, SIZE);
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