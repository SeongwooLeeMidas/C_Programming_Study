#include <stdio.h>

void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i = 0;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}

	return 0;
}