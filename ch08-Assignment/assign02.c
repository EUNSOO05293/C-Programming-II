/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든 원소를 출력하는 프로그램을 작성하시오.
실수형 배열은 크기가 10이고 값은 마음대로 지정해서 사용해도 된다.
 날짜: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(float* pf, int size);
int main()
{
	float arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	Arr(arr, 10);
	return 0;
}
void Arr(float* pf, int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%.02f ", *(pf + i));
}
