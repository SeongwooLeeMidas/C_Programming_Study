#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest < 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("가슴둘레 사이즈는 %c입니다.\n", size);
	return 0;
}