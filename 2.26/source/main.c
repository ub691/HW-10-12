#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	float num3;

	printf("enter two integers:");
	scanf("%d%d", &num1, &num2);

	num3 = num1 % num2;

	if (num3 == 0)
	{
		printf("%d is a multiple of %d\n",num1 ,num2);
	}

	if (num3 != 0)
	{
		printf("%d is not a multiple of %d\n",num1 ,num2);
	}

	system("pause");
	return 0;
}