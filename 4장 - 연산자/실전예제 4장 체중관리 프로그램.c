#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%.1lf %.1lf", &weight, &height);

	double BMI;
	BMI = weight / ((height / 100) * (height / 100));

	if (BMI >= 20.0 && BMI < 25.0)
	{
		printf("ǥ���Դϴ�.\n");
	}
	else
		printf("ü�߰����� �ʿ��մϴ�.\n");

	return 0;
}