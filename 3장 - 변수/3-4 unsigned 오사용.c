#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; // unsigned int는 범위가 21억임, 42억은 long long 
	printf("%d\n", a);

	a = -1;
	printf("%u\n", a); // unsigned는 자료형이 %u임
	
	return 0;
}