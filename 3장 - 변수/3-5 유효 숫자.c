#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft); // 7�ڸ� 
	printf("double�� ������ �� : %.20lf\n", db); // 15�ڸ�....
	// �Ǽ����� ��ȿ ���ڰ� ���� double���� �⺻���� ���
	return 0;
}