//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	double x, a;
	printf("Please enter a two numbers:\n");
	scanf("%lf%lf", &a, &x);
	printf("1. y = %f\n2. y = %f\n3. y = %f\n4. y = %f\n5. y = %f\n6. y = %f\n", a*x*x*x+10, a*x*x*(x+10), (a*x)*x*(x+10), (a*x)*x*x+10, a*(x*x*x)+10, a*x*(x*x+10));
	return 0;
}
