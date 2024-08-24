#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b; // 결과는 버려진다. 저장하지 않아서 무의미한 결과값, 사실 이 구문 자체가 필요없다 지워도 됨
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	return 0;
}