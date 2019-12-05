//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int num, d[4];
	printf("Please enter a 2-digit natural number:\n");
	scanf("%d", &num);
	d[3] = d[2] = num%10;
	num /= 10;
	d[1] = d[0] = num%10;
	printf("%d%d%d%d\n", d[0], d[1], d[2], d[3]);
	return 0;
}
