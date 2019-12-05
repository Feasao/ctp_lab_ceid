//The following code assumes its inputs are going to conform to the expected values has limited exception handling.

#include<stdio.h>
#include<math.h>

int main(void)
{
	unsigned int num, res = 0, i;
	printf("Please enter a natural number bellow 10:\n");
	scanf("%d", &num);
	if(num >= 10)
	{
		printf("Error: Invalid input\n");
		return 1;
	}
	for(i = 1; i <= num; i++)
	{
		res += pow(4*i, 2);
	}
	printf("Result: %d\n", res);
	return 0;
}
