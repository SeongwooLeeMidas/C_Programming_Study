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

	strcpy(LSW.name, "이성우");
	LSW.age = 28;
	LSW.height = 170;

	LSW.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(LSW.intro);

	printf("이름 : %s\n", LSW.name);
	printf("나이 : %d\n", LSW.age);
	printf("키 : %.1lf\n", LSW.height);
	printf("자기소개 : %s\n", LSW.intro);
	free(LSW.intro);

	return 0;
}