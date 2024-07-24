#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// strcpy(저장될 배열명, 저장할 문자열), 즉 두번째에서 첫번째로 덮어씌우기
// 첫 번째 인수에는 문자열을 사용할 수 없다

int main(void) {
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}