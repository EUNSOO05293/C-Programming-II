/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 파일 이름과 확장자를 입력으로 받아서 확장자를 포함한
 파일명을 출력하는 프로그램을 작성하시오.
 날짜: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void filename();

int main() {
    filename();
    return 0;
}

void filename() {
    char filename[100];
    char extension[20];

    printf("파일명? ");
    scanf("%s", filename);

    printf("확장자? ");
    scanf("%s", extension);

    printf("전체 파일명: %s.%s\n", filename, extension);
}
