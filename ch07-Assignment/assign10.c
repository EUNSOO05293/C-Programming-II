/*
 �й� : 202511228
 �̸� : ������
 ���α׷���: 3x3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
 ��¥: 2025.09.15
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

    printf("x ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx + y ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }
}