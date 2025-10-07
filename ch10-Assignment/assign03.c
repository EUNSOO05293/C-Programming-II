/*
 학번: 202511228
 이름: 이은수
 프로그램 명: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"
 이라고 출력한다. LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
 날짜: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 20
#define USER_COUNT 5

struct Login {
    char id[MAX + 1];
    char pw[MAX + 1];
};

void login() {
    struct Login users[USER_COUNT] = {
        {"guest", "idontknow"},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""}
    };

    char inputId[MAX + 1];
    char inputPw[MAX + 1];

    printf("ID? ");
    scanf("%20s", inputId);
    while (getchar() != '\n');

    int found = -1;
    for (int i = 0; i < USER_COUNT; i++) {
        if (strcmp(users[i].id, inputId) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("로그인 실패: 아이디 없음\n");
        return;
    }

    printf("PW: ");
    scanf("%20s", inputPw);

    if (strcmp(users[found].pw, inputPw) == 0) {
        printf("로그인 성공\n");
    }
    else {
        printf("로그인 실패: 비밀번호 틀림\n");
    }
}

int main() {
    login();
    return 0;
}
