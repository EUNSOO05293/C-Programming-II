/*
* �й�: 202511228
* �̸�: ������
* ���α׷� �� : Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾�
* �ʵ带 �����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* ���ڵ� ����: �̸� | �й� | �а� | �г�(����)
* �Է� ���� ���� : "exit" �Է�
* ��¥: 2025-09-15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Students 100

struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
};
typedef struct Student Student;

int main()
{
	struct Student students[100];
	int studentCount = 0;
	char line[128];

	printf("(�̸� | �й� | �а� | �г�) �������� �Է��ϼ���\n");
	printf("���� �Ϸ��� 'exit'�� �Է��ϼ���.\n");
	

	while (studentCount < 100)
	{
		printf("�Է� > ");
		getchar();
		fgets(Student.name);
	}
	

	return 0; 

}