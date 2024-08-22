#include <stdio.h>

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	// const 사용하면 이후에 값을 바꿀 수 없음. 따라서 선언과 동시에 초기화 필요
	// 초기화 안하면 쓰레기 값 계속 사용됨;
	income = 456;
	tax = income * tax_rate;
	printf("세금은 %.1lf입니다.\n", tax);
}