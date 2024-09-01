#include <stdio.h>

struct student // struct 예약어, student 구조체 이름
{
	int num;
	double grade;
};

int main(void)
{
	struct student s1; // 구조체 변수 선언하면 저장 공간 할당

	s1.num = 2; // . 멤버 접근 연산자, s1은 구조체 변수지만, s1.num은 int형 변수
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}