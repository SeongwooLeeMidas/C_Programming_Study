#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b); //AND �Ѵ� 1�̸� 1
	printf("a ^ b : %d\n", a ^ b); //XOR ���� �ٸ��� 1
	printf("a | b : %d\n", a | b); //OR �����ϳ� 1�̸� 1
	printf("~a: %d\n", ~a); // ����
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	return 0;
}