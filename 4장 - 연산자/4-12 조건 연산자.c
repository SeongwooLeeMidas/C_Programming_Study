#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // 조건이 참이면 a, 거짓이면 b 선정해서 res에 대입
	printf("큰 값 : %d\n", res);

	return 0;
}