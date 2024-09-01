#include <stdio.h>

struct student {
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s1 = { 315, "이성우", 2.4 },
		s2 = { 316, "이순신", 3.7 },
		s3 = { 317, "세종", 4.4 };

	struct student max; // 최고 학점 저장할 구조체 변수

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}