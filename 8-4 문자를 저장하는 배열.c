#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char str[80] = "raspberry";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}