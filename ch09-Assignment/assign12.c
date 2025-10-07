/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 
 왼쪽이나 오른쪽으로 회전(rotate)한 결과를 출력하는 프로그램을 작성하시오. 예를 들어 "abcdef"를 오른쪽으로 2글자 횐전하면
 "efabcd"가 된다. 이동할 글자 수가 음수면 왼쪽으로, 양수면 오른쪽ㅇ로 이동한다. 이동할 글자수로 0이 입력되면 프로그램을 종료한다.
 날짜: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void rotate(char* s, int n);

int main() {
    char str[100];
    int n;

    while (1) {
        printf("문자열? ");
        scanf(" %[^\n]", str);
        printf("이동할 글자수? ");
        scanf("%d", &n);
        if (n == 0) break;
        rotate(str, n);
        printf("%s\n", str);
    }

    return 0;
}

void rotate(char* s, int n) {
    int len = strlen(s);
    if (len == 0) return;

    n = n % len;
    if (n < 0) n += len;

    char tmp[100];
    strcpy(tmp, s + len - n);
    strncpy(tmp + n, s, len - n);
    tmp[len] = '\0';
    strcpy(s, tmp);
}
