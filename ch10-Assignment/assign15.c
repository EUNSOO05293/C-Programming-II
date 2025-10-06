/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 점의 좌표를 나타내는 POINT 구조체에 대해서 두 점의 좌표를 맞바꾸는 swap_point 함수를
 정의하시오. 크기가 10인 POINT 구조체 배열에 대하여 x퐈료를 기준으로 선택 정렬하는 프로그램을 작성하시오.
 날짜: 2025-10-07
*/

#define _CRT_CECURE_NO_WARNINGS
#include <stdio.h>

int count_digits(int n);

int main() {
    int num;
    printf("정수? ");
    scanf("%d", &num);
    if (num == 0) return 0;
    printf("count of digits: %d\n", count_digits(num));
    return 0;
}

int count_digits(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n < 10) {
        return 1;
    }
    return 1 + count_digits(n / 10);
}
