/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: 10 3x3 ����� ���� ���ϴ� add_matrix �Լ��� �ۼ��Ͻÿ�. 
 add_matrix �Լ��� �̿��ؼ� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
 ��¥: 2025-09-15
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

    printf("x ���:\n");
    for (i = 0; i < 9; i++) {
        x += 10;
        m[0][i] = x;
        printf(" %2d", m[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny ���:\n");
    for (i = 0; i < 9; i++) {
        m[1][i] = y;
        y--;
        printf(" %2d", m[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx+y ���:\n");
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