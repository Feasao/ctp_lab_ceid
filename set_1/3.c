//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int i, temp, sum = 0;
	float average;
	for(i = 1; i <= 10; i++)
	{
		printf("\nPlease enter the grade for class no %d:\n", i);
		scanf("%d", &temp);
		sum += temp;
	}
	average = sum/10.0;
	if(average >= 5)
	{
		printf("\nSuccess\n");
	}
	else
	{
		printf("\nFailure\n");
	}
	return 0;
}
