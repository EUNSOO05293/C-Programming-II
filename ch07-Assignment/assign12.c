/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 기차표 예매 프로그램을 작성하려고 한다.
 간단한 구현을 위해 좌석은 모두 10개라고 하자.
 예매할 좌석수를 입력받아 빈 자리를 할당한다.
 예매할 마다 각 좌석의 상태를 출력한다.
 O이면 예메 가능, X는 예매 불가를 위미한다.
 더 이상 예메할 수 없으면 프로그램을 종료한다.
 날짜: 2025.09.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void train();

int main() {
	train();
	return 0;
}

void train() {
	int i, select, cnt;
	int arr[10] = { 0 };

	while (arr[9] == 0) {
		printf("현재 좌석: [");
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0) {
				printf(" O");
			}
			else {
				printf(" X");
			}
		}
		printf(" ]\n예매할 좌석수? ");
		scanf("%d", &select);
		for (i = 0; i < 10; i++) {
			if (arr[i] == 0 && select > 0) {
				arr[i] = 1;
				printf("%d ", i + 1);
				select--;
			}
		}
		printf("번 좌석을 예매했습니다.\n");
	}
}