#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]); // 키보드로 입력받아 네 번째 요소에 저장

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]); 
	printf("%d\n", ary[4]); // 마지막 배열 요소는 쓰레기 값

	return 0;
}