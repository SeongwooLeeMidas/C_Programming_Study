#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int* pa = arr; // arr[0]�� �ּҸ� pa�� ����, ���� �ּ�
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ��� �� ��� : ");
	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pb);

	return 0;
}