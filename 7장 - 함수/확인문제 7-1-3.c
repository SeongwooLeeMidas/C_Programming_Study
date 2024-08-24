#include <stdio.h>

double centi_to_meter(int cm);

int main(void)
{
	double res;

	res = centi_to_meter(187); // centi_to_meter 호출
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int cm) // 187 넣고 계산한 1.87 미터 반환
{
	double meter;
	meter = cm / 100.0;

	return meter;
}