#include <stdlib.h>
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	printf("enter three integers\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("%d is greater\n", num1);
	}
	if (num2 > num1 && num2 > num3)
	{
		printf("%d is greater\n", num2);
	}
	if (num3 > num1 && num3 > num2)
	{
		printf("%d is greater\n", num3);
	}
	if (num1 < num2 && num1 < num3)
	{
		printf("%d is smallest", num1);
	}
	if (num2 < num1 && num2 < num3)
	{
		printf("%d is smallest", num2);
	}
	if (num3 < num1 && num3 < num2)
	{
		printf("%d is smallest", num3);
	}

	system("pause");
	return 0;
}