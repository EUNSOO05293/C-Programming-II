/*
* 학번: 202511228
* 이름: 이은수
* 프로그램 명: 1. 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
* 날짜: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void seq(int arr[], int size, int first, int diff) {
    for (int i = 0; i < size; i++) {
        arr[i] = first + i * diff;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int first, diff;

    printf("첫 번째 항?");
    scanf("%d", &first);

    printf("공차?");
    scanf("%d", &diff);

    seq(arr, 10, first, diff);

    return 0;
}