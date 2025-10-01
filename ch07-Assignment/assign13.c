/*
 학번 : 202511228
 이름 : 이은수
 프로그램명: 비트 OR 연산자를 이용하면 두 이미지를 합칠 수 있다.
 크기가 같은 2개의 unsigned char 배열을 비트 OR 연산한 결과를 출력하는 프로그램을 작성하시오.
 날짜: 2025.09.15
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bit_or(unsigned char a[], unsigned char b[], unsigned char c[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        a[i] = rand() % 256;
        b[i] = rand() % 256;
        c[i] = a[i] | b[i];
    }

    printf("image1:");
    for (i = 0; i < size; i++) printf(" %02X", a[i]);

    printf("\nimage2:");
    for (i = 0; i < size; i++) printf(" %02X", b[i]);

    printf("\nimage3:");
    for (i = 0; i < size; i++) printf(" %02X", c[i]);

    printf("\n");
}

int main() {
    unsigned char image1[16], image2[16], image3[16];

    srand((unsigned int)time(0));

    bit_or(image1, image2, image3, 16);

    return 0;
}