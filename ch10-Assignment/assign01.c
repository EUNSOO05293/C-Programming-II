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

struct LOGIN {
	char id[MAX + 1];
	char password[MAX + 1];
};
void manageLogin();
int main() {
	manageLogin();
	return 0;
}
void manageLogin() {
	struct LOGIN user;
	printf("���̵�: ");
	scanf("%20s", user.id);
	printf("�н�����: ");
	scanf("%20s", user.password);
	printf("���̵�: %s\n", user.id);
	printf("�н�����: ");
	for (int i = 0; i < strlen(user.password); i++) {
		printf("*");
	}
	printf("\n");
}
