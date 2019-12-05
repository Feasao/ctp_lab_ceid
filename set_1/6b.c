//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

double func1(double x);
double func2(double x);

int main(void)
{
	double value;
	printf("Please enter a number:\n");
	scanf("%lf", &value);
	printf("(i) f(%f) = %f\n(ii) f(%f) = %f\n", value, func1(value), value, func2(value));
	return 0;
}

double func1(double x)
{
	return pow(x, 5) - pow(x, 3) + 3*x;
}

double func2(double x)
{
	return exp(x) + 4 * log(x) - pow(x, 2);
}
