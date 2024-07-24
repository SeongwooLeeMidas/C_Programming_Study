#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char str[80] = "raspberry";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf_s("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}