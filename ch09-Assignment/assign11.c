/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: ���� �ܾ �Է¹޾� �����ձ� ������ �Ϸ��� �Ѵ�.
 ���� �����ڰ� �Է��� �ܾ ������ �Էµ� �ܾ��� ������ ���ڷ� �����ϴ��� �˻��ؼ� ������ ����� �� �ְ� �Ѵ�.
 �߸��� �ܾ �ԷµǸ� ���ݱ��� �����ձ⸦ �� �� ���� �����ߴ��� ����Ѵ�. ������ ������ ���ؼ� �Էµ� �ܾ �ùٸ� �ܾ����� �˻����� �ʴ´� ���� ��� "abc"�� 
 �ùٸ� �ܾ�� �����Ѵ�. �Էµ� �ܾ�� �ݵ�� 3���� �̻��̾�� �Ѵ�.
 ��¥: 2025-10-01
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
