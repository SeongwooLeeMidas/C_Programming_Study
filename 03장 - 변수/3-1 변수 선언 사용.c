#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double d;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	d = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� d�� �� : %.1lf\n", d);
	printf("���� ch�� �� : %c\n", ch);

	return 0;
}