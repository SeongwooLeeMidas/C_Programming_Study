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

	printf("���� : %d\n", lsw.pf.age);
	printf("Ű : %.1lf\n", lsw.pf.height);
	printf("�й� : %d\n", lsw.id);
	printf("���� : %.1lf\n", lsw.grade);

	return 0;
}