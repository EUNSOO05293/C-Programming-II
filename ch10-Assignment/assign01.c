/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 
 LOGIN 구조체를 정의하시오. 아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다. LOGIN 구조체 변수를 선언한 다음
 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오. 패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드
 글자 수 만큼 *을 대신 출력하시오.
 날짜: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

struct LOGIN {
	char id[MAX + 1];
	char password[MAX + 1];
};
void manageLogin();
int main() {
	manageLogin();
	return 0;
}
void manageLogin() {
	struct LOGIN user;
	printf("아이디: ");
	scanf("%20s", user.id);
	printf("패스워드: ");
	scanf("%20s", user.password);
	printf("아이디: %s\n", user.id);
	printf("패스워드: ");
	for (int i = 0; i < strlen(user.password); i++) {
		printf("*");
	}
	printf("\n");
}
