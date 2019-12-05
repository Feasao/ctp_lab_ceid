//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

#define EXP 3

int calc_sum_cube(int term);

int main(void)
{
	int num;
	printf("Please enter the largest term:\n");
	scanf("%d", &num);
	printf("The sum of the terms up to the %dth term is: %d\n", num, calc_sum_cube(num));
	return 0;
}

/*int calc_sum_cube(int term)
{
	return (int)pow((term*(term+1))/2, 2);
}

int calc_sum_cube(int term)
{
	int i, sum = 0;
	for(i = 1; i <= term; i++)
	{
		sum += pow(i, EXP);
	}
	return sum;
}

int calc_sum_cube(int term)
{
	int i = 1, sum = 0;
	while(i <= term)
	{
		sum += pow(i, EXP);
		i++;
	}
	return sum;
}

int calc_sum_cube(int term)
{
	int i = 1, sum = 0;
	do
	{
		sum += pow(i, EXP);
		i++;
	}while(i <= term);
	return sum;
}*/
