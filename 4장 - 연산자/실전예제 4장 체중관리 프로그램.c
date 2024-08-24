#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%.1lf %.1lf", &weight, &height);

	double BMI;
	BMI = weight / ((height / 100) * (height / 100));

	if (BMI >= 20.0 && BMI < 25.0)
	{
		printf("표준입니다.\n");
	}
	else
		printf("체중관리가 필요합니다.\n");

	return 0;
}