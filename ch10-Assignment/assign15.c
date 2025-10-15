#include <stdio.h>

int count_digits(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n < 10) {
        return 1;
    }
    return 1 + count_digits(n / 10);
}

int main(void) {
    int num;
    printf("정수? ");
    scanf("%d", &num);
    if (num == 0) return 0;
    printf("count of digits: %d\n", count_digits(num));
    return 0;
}
