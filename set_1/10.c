//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

int main(void)
{
	int x, y, max;
	printf("Please enter two integers:\n");
	scanf("%d%d", &x, &y);
	if(x >= y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	printf("%d + %d = %d\n%d is larger.\n%d ^ %d = %d\nLog10(%d) = %f\nLog10(%d) = %f\n", x, y, x + y, max, x, y, (int)pow(x, y), x, log10(x), y, log10(y));
	return 0;
}
