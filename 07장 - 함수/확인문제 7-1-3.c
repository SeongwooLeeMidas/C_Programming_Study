#include <stdio.h>

double centi_to_meter(int cm);

int main(void)
{
	double res;

	res = centi_to_meter(187); // centi_to_meter ȣ��
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int cm) // 187 �ְ� ����� 1.87 ���� ��ȯ
{
	double meter;
	meter = cm / 100.0;

	return meter;
}