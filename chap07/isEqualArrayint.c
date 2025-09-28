#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isEqualArrayInt(int a[], int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
int main()
{
	int x[5] = { 1,2,3,4,5 };
	int y[5] = { 1,2,3,4,5 };
	int z[5] = { 1,2,3,4,6 };

	if (isEqualArrayInt(x, y, 5))
		printf("x�� y�� �迭�� �����ϴ�.\n");
	else
		printf("x�� y�� �迭�� �ٸ��ϴ�.\n");

	if (isEqualArrayInt(x, z, 5))
		printf("x�� z�� �迭�� �����ϴ�.\n");
	else
		printf("x�� z�� �迭�� �ٸ��ϴ�.\n");

	return 0;
}