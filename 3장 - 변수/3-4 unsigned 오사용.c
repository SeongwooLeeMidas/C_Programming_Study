#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; // unsigned int�� ������ 21����, 42���� long long 
	printf("%d\n", a);

	a = -1;
	printf("%u\n", a); // unsigned�� �ڷ����� %u��
	
	return 0;
}