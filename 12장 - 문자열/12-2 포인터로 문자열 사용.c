#include <stdio.h>

int main(void)
{
	char* dessert = "apple";

	printf("오늘 후식은 %s\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s\n", dessert);

	return 0;
}