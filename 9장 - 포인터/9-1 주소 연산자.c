#include <stdio.h>
int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ���� �ּ� : %u\n", &a); // �ּҸ� �˰� ������ ������(�ּ� ������)�� ����ϸ� �ȴ�
	printf("double�� ���� �ּ� : %u\n", &b); //2085161000 �ּҰ� ����
	printf("char�� ���� �ּ� : %u\n", &c); // ��Ʈ�� 4����Ʈ, ������ 8����Ʈ, ���� 1����Ʈ �Ҵ�

	return 0;
}