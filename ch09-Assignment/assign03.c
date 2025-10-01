/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 입력받은 문자열의 소문자는 대문자
 날짜: 2025-10-01
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
	char str[255];
	int i = 0;

	printf("문자열? ");
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