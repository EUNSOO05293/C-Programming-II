/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� �ּҰ��� ã�� get_min_max �Լ��� �����Ͻÿ�.
 ũ�Ⱑ 10�� int �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� get_min_max �Լ��� �ִ밪�� �ּҰ��� ã�Ƽ� ����Ͻÿ�.
 ��¥: 2025-09-15
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

    printf("�迭:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("\n�ִ밪: %d", max);
    printf("\n�ּҰ�: %d", min);
}