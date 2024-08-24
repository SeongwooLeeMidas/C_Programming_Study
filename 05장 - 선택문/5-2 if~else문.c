#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
		a = 1; // 한줄일때는 중괄호 생략 가능
	else //else에는 조건을 사용하지 않는다
		a = -1; 

	printf("a : %d\n", a);
	return 0;
}