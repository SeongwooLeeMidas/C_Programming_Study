#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;
	temp = a; // 지역 변수라 당연히 못씀
	a = b;
	b = temp;
}