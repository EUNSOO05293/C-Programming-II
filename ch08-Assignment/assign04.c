/*
 �й�: 202511228
 �̸�: ������
 ���α׷� ��: �迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �Ǽ��� �迭�� ũ�Ⱑ 10�̰� ������� �ʱ�ȭ�ؼ� ����ص� �ȴ�.
 ��¥: 2025-09-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void doubleArr(double* a, int size);

int main()
{
	double arr1[] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	doubleArr(arr1, 10);
	return 0;
}
void doubleArr(double* a, int size) {
	int b;
	double avg = 0;

	printf("�迭: ");
	for (b = 0; b < size; b++)
	{
		printf("%.02f", *(a + b));
		avg += *(a + b);
	}
	printf("\n���: %f", avg / size);
}