/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ������ �Ű������� �����ؼ� ������ �ִ� ��� ������ ���� ���ϴ�
 sum_of_digits �Լ��� ��� �Լ��� �����Ͻÿ�
 ��¥: 2025-10-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n);
int num = 0;

int main()
{
    while (1) {
        printf("����? ");
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


