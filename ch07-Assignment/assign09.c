/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 1~12월의 핸드폰 요금을 배열에 저장하고 화면에
 막대 그래프로 출력하는 프로그램을 작성하시오.
 날짜: 2025.09.15
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Phone();
void print(int value);

int main()
{
	Phone();
	return 0;

}

void print(int value) {
	int i;
	for (i = 0; i < value / 2000; i++) {
		printf("*");
	}
	printf("\n");
}

void Phone() {
	int i, j;
	int arr[12] = { 36000, 42000, 38000, 46000, 53000, 32000, 71000, 33000, 58000, 49000, 34000, 65000 };

	for (i = 0; i < 12; i++) {
		printf("%2d월 %d:", i + 1, arr[i]);
		print(arr[i]);
	}
}