#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res); // �� ��Ŷ �� ����
	// �� ��Ŷ ���̶� AND ���꿡���� ������ �����̸� ������ �����̶�� ��

	res = (a < 10) || (a > 20);
	printf("OR ���� �� : %d\n", res);
	// OR���� �� ��Ŷ ���� ������ ���̸� ���װ� ������� ����� ���Դϴ�.

	res = !(a >= 30);
	printf("NOT ���� �� : %d\n", res);

	return 0;
}