/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 정수를 매개변수로 전달해서 정수에 있는 모든 숫자의 합을 구하는
 sum_of_digits 함수를 재귀 함수로 정의하시오
 날짜: 2025-10-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n);
int num = 0;

int main()
{
    while (1) {
        printf("정수? ");
        scanf("%d", &num);

        if (num == 0)
            return 0;

        printf("sum of digits: %d\n", sum_of_digits(num));
    }
}

int sum_of_digits(int n) {
    if (n < 0)
        n = -n;

    if (n < 10)
        return n;

    return (n % 10) + sum_of_digits(n / 10);
}


