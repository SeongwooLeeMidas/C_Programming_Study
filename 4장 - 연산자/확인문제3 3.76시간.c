#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	
	min = (int)((time - hour) * 60);

	sec = (int)((time - hour) * 60 - min);

	printf("3.76�ð��� %d�ð� %d�� %���Դϴ�.\n", hour, min, sec);

	return 0;
}