//The following code assumes its inputs are going to conform to the expected values has limited exception handling.

#include<stdio.h>

int fibonacci(int term);

int main(void)
{
	int num, i, j;
	printf("Please enter the amount of terms to be displayed:\n");
	scanf("%d", &num);
	if(num > 20)
	{
		num = 20;
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 5 && (i*5+j) < num; j++)
		{
			printf("%d\t", fibonacci(i*5+j));
		}
		printf("\n");
	}
	return 0;
}

int fibonacci(int term)
{
	if(!term)
	{
		return 0;
	}
	else if(term == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(term-1) + fibonacci(term-2);
	}
}
