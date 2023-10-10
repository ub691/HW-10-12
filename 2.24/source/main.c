#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("enter an integer:");
	scanf("%d", &num1);

	num2 = num1 % 2;

	if (num2 == 0)
	{
		printf("\n%d is even",num1);
	}
	if (num2 != 0)
	{
		printf("\n%d is odd",num1);
	}
	system("pause");
	return 0;
}