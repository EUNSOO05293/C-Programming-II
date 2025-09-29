/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾는 get_min_max 함수를 정의하시오.
 크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최대값과 최소값을 찾아서 출력하시오.
 날짜: 2025-09-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void minmax(int* a, int n);

int main() {
    int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    minmax(arr, 10);
    return 0;
}

void minmax(int* a, int n) {
    int i, max = a[0], min = a[0];

    printf("배열:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("\n최대값: %d", max);
    printf("\n최소값: %d", min);
}