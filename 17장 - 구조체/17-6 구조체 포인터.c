#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main()
{
	struct score yuni = { 90, 80, 70 }; // ����ü ���� ���� �� �ʱ�ȭ
	struct score* ps = &yuni;

	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps->eng);
	printf("���� : %d\n", ps->math);

	return 0;
}