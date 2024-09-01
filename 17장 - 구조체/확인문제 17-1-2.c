#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main()
{
	struct cracker basasak;
	
	printf("바사삭의 가격과 열랑을 입력하세요 : ");
	scanf("%d %d", &(basasak.price), &(basasak.calories));

	printf("바사삭의 가격 : %d원\n", basasak.price);
	printf("바사삭의 열량 : %dkcal\n", basasak.calories);

	return 0;
}