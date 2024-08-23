#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수 값 : %d, %d\n", *pa, *pb);
	printf("두 정수 합 : %d\n", *pt);
	printf("두 정수 평균 : %.1f\n", *pg);

	return 0;
}