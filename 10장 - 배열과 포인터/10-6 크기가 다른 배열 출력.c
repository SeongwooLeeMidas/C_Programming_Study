#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10,20,30,40,50 }; // 여기서 ary는 &ary[0]이다
	int ary2[7] = { 10,20,30,40,50,60,70 }; // 즉, 배열의 이름 자체는 포인터처럼 동작한다

	print_ary(ary1, 5); // ary1의 시작 주소를 받게 되는거임
	printf("\n");
	print_ary(ary2, 7);
}
// pa 라는 포인터에 배열의 시작 주소를 할당하면 pa는 배열의 첫 번째 요소를 가리킨다
// pa[0]은 *(pa+0)이랑 같고, 이는 ary[0]이랑 같으니까 10인 것임!

// pa[0] : 포인터 pa가 가리키는 메모리 주소에서 첫 번째 요소를 가리킴
// *(pa + 0) : pa가 가리키는 주소에서 0만큼 떨어진 위치, 즉 pa가 가리키는 주소와 같음
// 따라서 *(pa + 0)은 ary[0]의 값을 참조하는 것임
// ary[0] : 배열의 첫 번째 요소 참조

void print_ary(int* pa, int size) // pa는 단순한 변수 이름, int*가 정수형 포인터라는 사실이 중요함
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
	return 0;
}