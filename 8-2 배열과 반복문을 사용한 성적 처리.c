#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int score[5];
	int i;
	int total = 0; // �ʱ�ȭ������Ѵ�
	double avg;

	// �ݺ����� ����ؼ� ������ �������� ��� �ؾ��ұ�?
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < 5; i++) {
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");
	
	printf("��� : %.2lf\n", avg);
	
	return 0;
}