#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b); //AND 둘다 1이면 1
	printf("a ^ b : %d\n", a ^ b); //XOR 수가 다르면 1
	printf("a | b : %d\n", a | b); //OR 둘중하나 1이면 1
	printf("~a: %d\n", ~a); // 음수
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	return 0;
}