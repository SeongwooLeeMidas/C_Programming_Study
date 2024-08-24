#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int score[5];
	int i;
	int total = 0; // 초기화해줘야한다
	double avg;

	// 반복문을 사용해서 성적을 받으려면 어떻게 해야할까?
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
	
	printf("평균 : %.2lf\n", avg);
	
	return 0;
}