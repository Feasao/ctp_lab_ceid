//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

int recursive_func(int n);

int main(void)
{
	int term;
	printf("Please enter the term you wish to be displayed:\n");
	scanf("%d", &term);
	printf("The term no %d is %d\n", term, recursive_func(term));
	return 0;
}

int recursive_func(int n)
{
	int first_term = 2;
	if(n == 1)
	{
		return first_term;
	}
	else
	{
		return (int)pow(recursive_func(n-1),5) - recursive_func(n-1);
	}
}
