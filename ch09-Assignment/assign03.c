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
	int z = 0;

	printf("���ڿ�? ");
	scanf("%s", str);
	
	for (int z = 0; z< strlen(str); z++)
	{
		if (isupper(str[z]))
		{
			str[z] = tolower(str[z]);
		}
		else if (islower(str[z]))
		{
			str[z] = toupper(str[z]);
		}
		z++;

	}
	printf(str);

	return;
	
}