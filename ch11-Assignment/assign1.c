/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ������ �Ű������� �����ؼ� ������ �ִ� ������ ������ ���ϴ�
 count_digits �Լ��� ��� �Լ��� �����Ͻÿ�
 ��¥: 2025-10-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count_num(int n);
int num = 0;

int main()
{
    while (1) {
        printf("����? ");
        scanf("%d", &num);

        if (num == 0)
            return 0;
        printf("count of digits: %d\n", count_num(num));
    }
}

int count_num(int n) {
    if (n < 0)
        n = -n;

    if (n < 10)
        return 1;

    return 1 + count_num(n / 10);
}
