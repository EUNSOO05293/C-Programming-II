/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성하시오
 날짜: 2025-10-01
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp_ic(const char* lhs, const char* rhs) {
    while (*lhs && *rhs) {
        int c1 = tolower((unsigned char)*lhs);
        int c2 = tolower((unsigned char)*rhs);
        if (c1 != c2) {
            return c1 - c2;
        }
        lhs++;
        rhs++;
    }
    return tolower((unsigned char)*lhs) - tolower((unsigned char)*rhs);
}

int main(void) {
    char str1[100];
    char str2[100];

    printf("첫 번째 문자열? ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("두 번째 문자열? ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp_ic(str1, str2);

    if (result == 0) {
        printf("%s와 %s가 같습니다.\n", str1, str2);
    }
    else {
        printf("%s와 %s가 다릅니다.\n", str1, str2);
    }

    return 0;
}
