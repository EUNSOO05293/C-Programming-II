/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ��ȣ ��ȣ�� ������ ġȯ ��ȣ�� ��ȣȭ�ϰ��� �ϴ� ���ڿ��� �� ���ĺ��� Ư��
 ������ŭ ���ϰų� ���� �ٸ� ���ĺ����� ġȯ�ϴ� ����̴� ������� B�� 3��ŭ ���ؼ� ġȯ�ϸ� E�� �Ǵ�
 ���̴�. ���ڿ��� Ű ��(ġȯ�� ������ �̵��Ÿ�)�� �Է� �޾Ƽ� ��ȣȭ�� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt();

int main() {
    encrypt();
    return 0;
}


void encrypt() {
    char input[100];
    char output[100];
    int key;

    printf("���ڿ�? ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    printf("��ȣŰ(����)? ");
    scanf("%d", &key);

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];

        if (isupper(c)) {
            output[i] = ((c - 'A' + key) % 26) + 'A';
        }
        else if (islower(c)) {
            output[i] = ((c - 'a' + key) % 26) + 'a';
        }
        else {
            output[i] = c;
        }
    }

    output[strlen(input)] = '\0';
    printf("��ȣȭ�� ���ڿ�: %s\n", output);
}