#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// strcpy(����� �迭��, ������ ���ڿ�), �� �ι�°���� ù��°�� ������
// ù ��° �μ����� ���ڿ��� ����� �� ����

int main(void) {
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}