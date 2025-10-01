/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을
 계산해서 출력하는 프로그램을 작성하시오
 날짜: 2025.09.15
 */
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>
void Prices();

int main()
{
	Prices();
	return 0;
}

void Prices()
{
	int i, discount_rate;
	int arr[ARR_SIZE];
	int arr_dis[ARR_SIZE];
	printf("상품가 5개를 입력하세요:\n");

	for (i = 0; i < ARR_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	for (i = 0; i < ARR_SIZE; i++) {
		arr_dis[i] = (arr[i] / 100) * (100 - discount_rate);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("가격:%7d --> 할인가:%7d\n", arr[i], arr_dis[i]);
	}

}