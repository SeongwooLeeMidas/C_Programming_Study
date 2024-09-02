#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];                
	char* str[3];                 // 동적 할당 영역을 연결할 포인터 배열
	int i;                        

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);               // 문자열 입력, scanf는 공백, 줄바꿈하면 입력 끊어버림
		str[i] = (char*)malloc(strlen(temp) + 1);   // 문자열 저장 공간 할당
		strcpy(str[i], temp);     // 동적 할당 영역에 문자열 복사
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);   
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);             
	}

	return 0;
}