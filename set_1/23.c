//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int num[4], i, j, x = 0, y = 1, max;
	printf("Please enter 4 integers:\n");
	scanf("%d%d%d%d", &num[0], &num[1], &num[2], &num[3]);
	max = num[0] + num[1];
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 4; j++)
		{
			if(num[i] + num[j] > max)
			{
				max = num[i] + num[j];
				x = num[i];
				y = num[j];
			}
		}
	}
	printf("%d + %d = %d\n", x, y, max);
	return 0;
}
