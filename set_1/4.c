//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int a, b;
	printf("Please enter two integers:\n");
	scanf("%d%d", &a, &b);
	if(a*b > 0 && a*b < 10)
	{
		printf("\n%d + %d = %d\n", a, b, a+b);
	}
	else if(a*b > 100 && a*b < 1000)
	{
		printf("\n%d - %d = %d\n", a, b, a-b);
	}
	else
	{
		printf("The integers you entered don't meet the requirements.\n");
	}
	return 0;
}
