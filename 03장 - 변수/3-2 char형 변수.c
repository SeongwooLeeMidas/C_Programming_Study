#include <stdio.h>

int main(void)
{
	char ch1 = 'A';  // 아스키 코드 값
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch2);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

	return 0;
}