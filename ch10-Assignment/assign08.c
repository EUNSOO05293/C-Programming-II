/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
 �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�. PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product
 �Լ��� �����Ͻÿ�. PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����
 ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
 ��¥: 2025-10-07
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

	printf("��ǰ��? ");
	scanf("%30s", temp);
	strncpy(item.name, temp, MAX);
	item.name[MAX] = '\0';
	
	printf("����? ");
	scanf("%d", &item.price);
	printf("���? ");
	scanf("%d", &item.stock);

	printf("[%s %d�� ���: %d]\n", item.name, item.price, item.stock);
}


