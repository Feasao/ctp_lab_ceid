//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	double f;
	printf("Please enter the temperature in Fahrenheit:\n");
	scanf("%lf", &f);
	printf("The temperature in Celsius is: %f\n", (5.0/9)*(f - 32));
	return 0;
}
