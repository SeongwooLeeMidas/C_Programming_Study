#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void)
{
	struct profile LSW;

	strcpy(LSW.name, "�̼���");
	LSW.age = 28;
	LSW.height = 170;

	LSW.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(LSW.intro);

	printf("�̸� : %s\n", LSW.name);
	printf("���� : %d\n", LSW.age);
	printf("Ű : %.1lf\n", LSW.height);
	printf("�ڱ�Ұ� : %s\n", LSW.intro);
	free(LSW.intro);

	return 0;
}