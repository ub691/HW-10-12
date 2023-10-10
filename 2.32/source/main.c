#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight;
	float height;
	double bmi;
	printf("enter your weight(kg):");
	scanf("%f", &weight);
	printf("enter your height(m):");
	scanf("%f", &height);

	bmi = weight / height / height;

	printf("your BMI is: %lf\n\n", bmi);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("obese:       30 or great\n");

	system("pause");
	return 0;
}