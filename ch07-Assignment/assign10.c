/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 3x3 행렬의 합을 구하는 프로그램을 작성하시오.
행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
 날짜: 2025.09.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void showXY();

int main() {
    showXY();
    return 0;
}

void showXY() {
    int arr[2][9];
    int i;

    for (i = 0; i < 9; i++) {
        arr[0][i] = (i + 1) * 10;
    }

    for (i = 0; i < 9; i++) {
        arr[1][i] = 9 - i;
    }

    printf("x 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx + y 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }
}