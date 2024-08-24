#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터 크기 : %d\n", sizeof(&ch));
	printf("int * 포인터 크기 : %d\n", sizeof(&in));
	printf("double * 포인터 크기 : %d\n", sizeof(&db));

	printf("char * 포인터가 가리키는 변수 크기 : %d\n", sizeof(&ch));
	printf("int* 포인터가 가리키는 변수 크기 : %d\n", sizeof(&in));
	printf("double * 포인터가 가리키는 변수 크기 : %d\n", sizeof(&db));
}