/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� 
 �����̳� ���������� ȸ��(rotate)�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ��� "abcdef"�� ���������� 2���� Ⱥ���ϸ�
 "efabcd"�� �ȴ�. �̵��� ���� ���� ������ ��������, ����� �����ʤ��� �̵��Ѵ�. �̵��� ���ڼ��� 0�� �ԷµǸ� ���α׷��� �����Ѵ�.
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void rotate(char* s, int n);

int main() {
    char str[100];
    int n;

    while (1) {
        printf("���ڿ�? ");
        scanf(" %[^\n]", str);
        printf("�̵��� ���ڼ�? ");
        scanf("%d", &n);
        if (n == 0) break;
        rotate(str, n);
        printf("%s\n", str);
    }

    return 0;
}

void rotate(char* s, int n) {
    int len = strlen(s);
    if (len == 0) return;

    n = n % len;
    if (n < 0) n += len;

    char tmp[100];
    strcpy(tmp, s + len - n);
    strncpy(tmp + n, s, len - n);
    tmp[len] = '\0';
    strcpy(s, tmp);
}
