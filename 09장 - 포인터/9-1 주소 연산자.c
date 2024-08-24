#include <stdio.h>
int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수 주소 : %u\n", &a); // 주소를 알고 싶으면 역참조(주소 연산자)를 사용하면 된다
	printf("double형 변수 주소 : %u\n", &b); //2085161000 주소가 나옴
	printf("char형 변수 주소 : %u\n", &c); // 인트는 4바이트, 더블은 8바이트, 차는 1바이트 할당

	return 0;
}