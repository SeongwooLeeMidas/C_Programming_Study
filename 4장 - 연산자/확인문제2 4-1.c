#include <stdio.h>

int main(void)
{
	int a, b, tot;
	double avg;

	printf("�� ���� ���� : ");
	scanf("%d %d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;

	printf("��� : %.1lf\n", avg);

	return 0;
}