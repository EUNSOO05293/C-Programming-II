/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ���� �迭�� �Ű������� ���޹޾� (���鹮��,'\n','\t','\f','\r','\v')
 �� ��� �����ϴ� remove_space �Լ��� �ۼ��Ͻÿ�. remove_space �Լ��� �̿��ؼ� �Է¹��� ���ڿ�����
 ��ĭ�� ��� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void remove_space(char* str);

int main()
{
	char str[255];
	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	remove_space(str);

	printf("���� ���� �� %s\n", str);

	return 0;
}



void remove_space(char* str) {
	int write_idx = 0, read_idx = 0;

	while (str[read_idx] != '\0') {
		switch (str[read_idx]) {
			case ' ':
			case '\n':
			case '\t':
			case '\f':
			case '\r':
			case '\v':
				break;
			default:
				str[write_idx] = str[read_idx];
				write_idx++;
				break;
		}
		read_idx++;
	}
	str[write_idx] = '\0';
	
	return;
}