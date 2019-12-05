//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int x, y, r;
	printf("Please enter two positive integers:\n");
	scanf("%d %d", &x, &y);
	while(y > 0)
	{
		r = x%y;
		x = y;
		y = r;
	}
	printf("The GCD of the numbers you entered is: %d\n", x);
	return 0;
}
