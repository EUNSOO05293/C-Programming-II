/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
 ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"
 �̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
 ��¥: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 20
#define USER_COUNT 5

struct Login {
    char id[MAX + 1];
    char pw[MAX + 1];
};

void login() {
    struct Login users[USER_COUNT] = {
        {"guest", "idontknow"},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""}
    };

    char inputId[MAX + 1];
    char inputPw[MAX + 1];

    printf("ID? ");
    scanf("%20s", inputId);
    while (getchar() != '\n');

    int found = -1;
    for (int i = 0; i < USER_COUNT; i++) {
        if (strcmp(users[i].id, inputId) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("�α��� ����: ���̵� ����\n");
        return;
    }

    printf("PW: ");
    scanf("%20s", inputPw);

    if (strcmp(users[found].pw, inputPw) == 0) {
        printf("�α��� ����\n");
    }
    else {
        printf("�α��� ����: ��й�ȣ Ʋ��\n");
    }
}

int main() {
    login();
    return 0;
}
