#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j, num;
	for (i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &num);

		// 중복 검사
		for (j = 0; j < i; j++)
		{
			if (lotto_nums[j] == num)
			{
				printf("같은 번호가 있습니다!\n");
				i--;
				break;
			}
		}

		// 중복 없으면 배열에 저장
		if (j == i)
		{
			lotto_nums[i] = num;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
	printf("\n");
}