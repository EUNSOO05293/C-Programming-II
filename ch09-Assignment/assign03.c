/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, 
 �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��¥: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void String();

int main()
{
	String();
	return 0;
}

void String()
{
	char str[100];
	int i = 0;

	printf("���ڿ�? ");
	scanf("%s", str);
	
	while (str[i])
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;

	}
	printf(str);

	return;
	
}