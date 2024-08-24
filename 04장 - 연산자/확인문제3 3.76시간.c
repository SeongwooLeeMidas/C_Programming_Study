#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	
	min = (int)((time - hour) * 60);

	sec = (int)((time - hour) * 60 - min);

	printf("3.76시간은 %d시간 %d분 %초입니다.\n", hour, min, sec);

	return 0;
}