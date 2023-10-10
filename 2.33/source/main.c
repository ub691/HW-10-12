#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,f;
	printf("enter total miles deiven per day:");
	scanf("%f", &a);
	printf("enter cost per liter of gasoline:");
	scanf("%f", &b);
	printf("enter average miles per gasoline:");
	scanf("%f", &c);
	printf("enter parking fees per day:");
	scanf("%f", &d);
	printf("enter tolls per day:");
	scanf("%f", &e);

	f = ((a / c) * b) + d + e;

	printf("cost %f per day\n", f);

	system("pause");
	return 0;
}