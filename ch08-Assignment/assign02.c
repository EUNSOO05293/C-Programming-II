/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: �迭 ���Ҹ� ����Ű�� �����Ϳ� ������ ������ �̿��ؼ� �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ǽ��� �迭�� ũ�Ⱑ 10�̰� ���� ������� �����ؼ� ����ص� �ȴ�.
 ��¥: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(float* pf, int size);
int main()
{
	float arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	Arr(arr, 10);
	return 0;
}
void Arr(float* pf, int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%.02f ", *(pf + i));
}
