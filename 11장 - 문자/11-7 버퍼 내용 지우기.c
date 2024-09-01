#include <stdio.h>

int main(void)
{
	int num, grade;

	scanf("%d", &num);
	getchar();  // 버퍼에 남아있는 개행 문자 제거
	
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}