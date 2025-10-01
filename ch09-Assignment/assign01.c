/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 한 줄의 문자열을 입력받아서 공백 문자(' '),'\n','\t','\f','\r','\v')의
 개수를 세는 프로그램 작성
 날짜: 2025-10-01
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
	printf("문자열? ");
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
	printf("공백 문자의 개수: %d\n", count);

	return;

}