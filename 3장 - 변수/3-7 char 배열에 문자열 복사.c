#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}