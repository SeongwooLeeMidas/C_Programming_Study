#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = ((double)audience / (double)seats) * 100.0;

	printf("ÀÔÀå·ü : %.1lf%%\n", rate);

	return 0;
}