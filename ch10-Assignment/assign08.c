/*
 학번: 202511228
 이름: 이은수
 프로그램 명: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
 각 제품별로 제품명, 가격, 재고 저장할 수 있어야 한다. PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product
 함수를 정의하시오. PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오. 참고로
 제품명은 빈칸 없는 한 단어로 입력한다.
 날짜: 2025-10-07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 30

struct Product {
	char name[MAX + 1];
	int price;
	int stock;
};

void manageProduct();


int main() {
	manageProduct();
}

void manageProduct() {
	struct Product item;
	char temp[MAX + 1];

	printf("제품명? ");
	scanf("%30s", temp);
	strncpy(item.name, temp, MAX);
	item.name[MAX] = '\0';
	
	printf("가격? ");
	scanf("%d", &item.price);
	printf("재고? ");
	scanf("%d", &item.stock);

	printf("[%s %d원 재고: %d]\n", item.name, item.price, item.stock);
}


