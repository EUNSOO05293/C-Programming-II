/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 문자 배열을 매개변수로 전달받아 (공백문자,'\n','\t','\f','\r','\v')
 를 모두 제거하는 remove_space 함수를 작성하시오. remove_space 함수를 이용해서 입력받은 문자열에서
 빈칸을 모두 제거하고 출력하는 프로그램을 작성하시오.
 날짜: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void remove_space(char* str);

int main()
{
	char str[255];
	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	remove_space(str);

	printf("공백 제거 후 %s\n", str);

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