/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' '),'\n','\t','\f','\r','\v')��
 ������ ���� ���α׷� �ۼ�
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void String();

int main()
{
	String();
	return 0;
}
void String()
{
	char str[100]; 
	int count = 0, i = 0;
	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\0') {
		switch (str[i]) {
			case ' ':
			case '\n':
			case '\t':
			case '\f':
			case '\r':
			case '\v':
				count++;
				break;
		}
		i++;
	}
	printf("���� ������ ����: %d\n", count);

	return;

}