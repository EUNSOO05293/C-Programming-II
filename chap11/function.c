#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int get_id(void);

// �Լ���: get_id()
// ���: 1001������ ���� ������ ��ȣ�� �����ϸ鼭 ��ȯ�ϴ� ���
// �Է�: ����
// ��ȯ��: 1001���� �����ؼ� 1�� �����ϴ� ������ ��
// ���� : ����

static int last_id = 1000;

int last_id = 1000;

int get_id(void)
{
	
	return ++last_id;;
}
