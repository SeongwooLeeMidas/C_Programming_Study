#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
		a = 1; // �����϶��� �߰�ȣ ���� ����
	else //else���� ������ ������� �ʴ´�
		a = -1; 

	printf("a : %d\n", a);
	return 0;
}