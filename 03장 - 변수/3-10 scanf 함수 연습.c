#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요: ");
	scanf("%d %lf", &age, &height);
	printf("나이 : %d, 키 : %lf", age, height);

	return 0;
}