//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	double d;
	float f;
	printf("Please enter a number:\n");
	scanf("%lf", &d);
	f = d;
	printf("Single precision: %0.12f\nDouble Precision: %0.12f", f, d);
	return 0;
}
