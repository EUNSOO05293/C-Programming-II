#include <stdio.h>
#define SIZE 10


void printArrayFloat(float a[], int size);
void copyArrayFloat(float from[], float to[], int size);

int main()
{
	float A[SIZE] = { 0.1,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
	float B[SIZE] = { 0 };
	printArrayFloat(A, SIZE);
	copyArrayFloat(A, B, SIZE);
	printArrayFloat(B, SIZE);

}

void printArrayFloat(float a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.1f ", a[i]);
	}
	printf("\n");
}

void copyArrayFloat(float from[], float to[], int size)
{
	int i;
	for (int i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
	printf("\n");
}