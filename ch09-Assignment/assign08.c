/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 시호 암호는 간단한 치환 암호로 암호화하고자 하는 문자열의 각 알파벳을 특정
 개수만큼 더하거나 빼서 다른 알파벳으로 치환하는 방식이다 예를들어 B를 3만큼 더해서 치환하면 E가 되는
 식이다. 문자열과 키 값(치환할 문자의 이동거리)를 입력 받아서 암호화된 문자열을 출력하는 프로그램을 작성하시오.
 날짜: 2025-10-01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt();

int main() {
    encrypt();
    return 0;
}


void encrypt() {
    char input[100];
    char output[100];
    int key;

    printf("문자열? ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    printf("암호키(정수)? ");
    scanf("%d", &key);

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];

        if (isupper(c)) {
            output[i] = ((c - 'A' + key) % 26) + 'A';
        }
        else if (islower(c)) {
            output[i] = ((c - 'a' + key) % 26) + 'a';
        }
        else {
            output[i] = c;
        }
    }

    output[strlen(input)] = '\0';
    printf("암호화된 문자열: %s\n", output);
}