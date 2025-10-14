/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 구조체 배열이 있을 때,
 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에 추가할 노래를 번호로 선택하게 한다.
 플레이리스트에 노래를 추가할 때마다 플레이리스트이 곡 목록과 전체 재생 시간이 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만
 등록할 수 있다.
 날짜: 2025-10-07
*/
#define SONG_COUNT (sizeof(songs)/sizeof(songs[0]))
#define MAX_PLAYLIST 5
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct song {
    char title[100];
    char artist[100];
    char genre[20];
    int playtime;
};

struct song songs[] = {
    {"thank u, next", "Ariana Grande", "pop", 208},
    {"Attention", "Charlie Puth", "pop", 209},
    {"별 보러 가자", "박보검", "ballad", 316},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "방탄소년단", "hip-hop", 209},
    {"봄날", "방탄소년단", "hip-hop", 274},
    {"Awake", "방탄소년단", "ballad", 226},
    {"아낙네", "MINO", "hip-hop", 241}
};



void playlist() {
    struct song* playlist[MAX_PLAYLIST] = { NULL };
    int playlist_count = 0;
    int input;
    int total_time = 0;

    while (1) {
        printf("-------------------------------------------------\n");
        printf("번호\t제목\t\t아티스트\t장르\t재생시간\n");
        for (int i = 0; i < SONG_COUNT; i++) {
            printf("%d:\t%-15s %-10s %-8s %d초\n", i + 1,
                songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
        }

        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &input);

        if (input < 1 || input > SONG_COUNT) {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        if (playlist_count >= MAX_PLAYLIST) {
            printf("플레이리스트가 가득 찼습니다.\n");
            break;
        }

        playlist[playlist_count++] = &songs[input - 1];

        printf("<< 플레이리스트 >>\n");
        total_time = 0;
        for (int i = 0; i < playlist_count; i++) {
            printf("%s\t%s\t%s\t%d초\n",
                playlist[i]->title,
                playlist[i]->artist,
                playlist[i]->genre,
                playlist[i]->playtime);
            total_time += playlist[i]->playtime;
        }

        printf("총 재생시간 : %d초\n", total_time);
    }
}

int main() {
    playlist();
    return 0;
}