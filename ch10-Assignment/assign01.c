/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� 
 LOGIN ����ü�� �����Ͻÿ�. ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�. LOGIN ����ü ������ ������ ����
 ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н�����
 ���� �� ��ŭ *�� ��� ����Ͻÿ�.
 ��¥: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

struct Login {
    char id[MAX + 1];
    char pw[MAX + 1];
};

void loginManage();

int main() {
    loginManage();
    return 0;
}

void loginManage() {
    struct Login user;
    printf("ID? ");
    scanf("%20s", user.id);
    printf("Password? ");
    scanf("%20s", user.pw);

    printf("ID: %s\n", user.id);
    printf("PW: ");
    for (int i = 0; i < strlen(user.pw); i++) {
        printf("*");
    }
    printf("\n");
}
