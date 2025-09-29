/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 10 3x3 행렬의 합을 구하는 add_matrix 함수를 작성하시오. 
 add_matrix 함수를 이용해서 행렬의 합을 구하는 프로그램을 작성하시오.
 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
 날짜: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int* a, int* b, int* c, int n) {
    int i;
    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

void run() {
    int m[3][9];
    int i, x = 0, y = 9;

    printf("x 행렬:\n");
    for (i = 0; i < 9; i++) {
        x += 10;
        m[0][i] = x;
        printf(" %2d", m[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny 행렬:\n");
    for (i = 0; i < 9; i++) {
        m[1][i] = y;
        y--;
        printf(" %2d", m[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx+y 행렬:\n");
    add(m[0], m[1], m[2], 9);
    for (i = 0; i < 9; i++) {
        printf(" %2d", m[2][i]);
        if (i % 3 == 2) printf("\n");
    }
}

int main() {
    run();
    return 0;
}