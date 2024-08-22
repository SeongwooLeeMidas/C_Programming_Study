#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft); // 7자리 
	printf("double형 변수의 값 : %.20lf\n", db); // 15자리....
	// 실수형은 유효 숫자가 많은 double형을 기본으로 사용
	return 0;
}