/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ���� �̸��� Ȯ���ڸ� �Է����� �޾Ƽ� Ȯ���ڸ� ������
 ���ϸ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void filename();

int main() {
    filename();
    return 0;
}

void filename() {
    char filename[100];
    char extension[20];

    printf("���ϸ�? ");
    scanf("%s", filename);

    printf("Ȯ����? ");
    scanf("%s", extension);

    printf("��ü ���ϸ�: %s.%s\n", filename, extension);
}
