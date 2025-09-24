/*
* 학번: 202511228
* 이름: 이은수
* 프로그램 명 : 키보드로부터 다음 레코드를 한 줄 입력받아
* 필드를 구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
* 레코드 형식: 이름 | 학번 | 학과 | 학년(정수)
* 입력 종료 조건 : "exit" 입력
* 날짜: 2025-09-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Students 100

struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
};
typedef struct Student Student;

int main()
{
	return 0;

}

void Studentsdata()
{
	Student Student
}
