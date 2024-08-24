#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int* pa = arr; // arr[0]의 주소를 pa에 대입, 시작 주소
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소 값 출력 : ");
	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pb);

	return 0;
}