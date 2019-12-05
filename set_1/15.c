//The following code assumes its inputs are going to conform to the expected values has limited exception handling.

#include<stdio.h>

int main(void)
{
	int num, inv[5], i=0;
	printf("Please enter a 5-digit natural number:\n");
	scanf("%d", &num);
	if(num < 10000 || num > 99999)
	{
		printf("Error: Invalid input\n");
		return 1;
	}
	while(num > 0)
	{
		inv[i] = num%10;
		num /= 10;
		i++;
	}
	printf("%d%d%d%d%d\n", inv[0], inv[1], inv[2], inv[3], inv[4]);
	return 0;
}
