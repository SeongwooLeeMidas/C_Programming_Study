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
		printf("��ȣ �Է� : ");
		scanf("%d", &num);

		// �ߺ� �˻�
		for (j = 0; j < i; j++)
		{
			if (lotto_nums[j] == num)
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				break;
			}
		}

		// �ߺ� ������ �迭�� ����
		if (j == i)
		{
			lotto_nums[i] = num;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
	printf("\n");
}