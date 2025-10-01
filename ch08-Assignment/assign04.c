/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하시오.
 실수형 배열은 크기가 10이고 마음대로 초기화해서 사용해도 된다.
 날짜: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void doubleArr(double* a, int size);

int main()
{
	double arr1[] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	doubleArr(arr1, 10);
	return 0;
}
void doubleArr(double* a, int size) {
	int b;
	double avg = 0;

	printf("배열: ");
	for (b = 0; b < size; b++)
	{
		printf("%.02f", *(a + b));
		avg += *(a + b);
	}
	printf("\n평균: %f", avg / size);
}