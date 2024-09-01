#include <stdio.h>

struct profile {
	int age;
	double height;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student lsw;

	lsw.pf.age = 27;
	lsw.pf.height = 171;
	lsw.id = 96;
	lsw.grade = 3.6;

	printf("나이 : %d\n", lsw.pf.age);
	printf("키 : %.1lf\n", lsw.pf.height);
	printf("학번 : %d\n", lsw.id);
	printf("학점 : %.1lf\n", lsw.grade);

	return 0;
}