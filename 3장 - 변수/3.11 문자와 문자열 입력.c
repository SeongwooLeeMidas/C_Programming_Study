#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char grade;
	char name[20];

	printf("���� : ");
	scanf("%c", &grade);

	printf("�̸� : ");
	scanf("%s", &name);

	printf("%s�� ������ %c�Դϴ�.", name, grade);

	return 0;
}