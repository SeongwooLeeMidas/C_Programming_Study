#include <stdio.h>

int main(void)
{
	int num, grade;

	scanf("%d", &num);
	getchar();  // ���ۿ� �����ִ� ���� ���� ����
	
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}