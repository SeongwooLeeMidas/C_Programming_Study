#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;

	if (a > 10)
	{
		if (b >= 10)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b: %d\n", a, b);

	return 0;
}