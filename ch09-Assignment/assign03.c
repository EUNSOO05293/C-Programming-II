/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 입력받은 문자열의 소문자는 대문자로, 
 대문자는 소문자로 변환하는 프로그램을 작성하시오.
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
	char str[100];
	int z = 0;

	printf("문자열? ");
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