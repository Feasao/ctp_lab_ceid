//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int num, i, cur_count = 1, max_count = 0, max;
	printf("Please input the number of integers to be entered:\n");
	scanf("%d", &num);
	int seq[num];
	printf("Please enter the sequence of integers:\n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &seq[i]);
	}
	max = seq[0];
	for(i = 0; i < num; i++)
	{
		if(i < num-1 && seq[i] == seq[i+1])
		{
			cur_count++;
		}
		else
		{
			if( cur_count > max_count)
			{
				max_count = cur_count;
				max = seq[i];
			}
			cur_count = 1;
		}
	}
	printf("The number which was entered the most consecutive times was %d\n", max);
	return 0;
}
