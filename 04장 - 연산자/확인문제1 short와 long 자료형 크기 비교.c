#include <stdio.h>

int main(void)
{
	int res;
	
	res = sizeof(short) > sizeof(long);
	// sizeof�� �ǿ����ڷ� �ڷ��� �̸��� ����� ũ�⸦ ����Ʈ ������ ���
// short���� ũ�Ⱑ long������ ũ�� ���̹Ƿ� 1, �׷��� ������ 0�� res�� ����

	printf("%s\n", (res == 1) ? "short" : "long");
	// res�� 1�� ������ short���� ũ�Ⱑ ũ�Ƿ� ����ϰ� �׷��� ������ long���� ����Ѵ�

	return 0;
}