#include <stdio.h>

int main(void)
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "aog";
	pary[2] = "cog";
	pary[3] = "fog";
	pary[4] = "eog";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}