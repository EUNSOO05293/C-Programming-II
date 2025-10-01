/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 영어 단어를 입력받아 끝말잇기 게임을 하려고 한다.
 게임 참가자가 입력한 단어가 이전에 입력된 단어의 마지막 문자로 시작하는지 검사해서 게임을 계속할 수 있게 한다.
 잘못된 단어가 입력되면 지금까지 끝말잇기를 몇 번 연속 성공했는지 출력한다. 간단한 구현을 위해서 입력된 단어가 올바른 단어인지 검사하지 않는다 예를 들어 "abc"도 
 올바른 단어로 간주한다. 입력된 단어는 반드시 3글자 이상이어야 한다.
 날짜: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void game();

int main() {
    game();
    return 0;
}

void game() {
    char w1[100], w2[100];
    int count = 0;

    printf("word? ");
    scanf("%99s", w1);
    if (strlen(w1) < 3) {
        printf("too short , try again\n");
        return;
    }

    while (1) {
        printf("word? ");
        scanf("%99s", w2);

        if (strlen(w2) < 3) {
            printf("too short , try again\n");
            continue;
        }

        if (w1[strlen(w1) - 1] == w2[0]) {
            count++;
            strcpy(w1, w2);
        }
        else {
            printf("Wrong WORD!!! YOU FAILED!!!\n");
            printf("count : %d\n", count);
            break;
        }
    }
}
