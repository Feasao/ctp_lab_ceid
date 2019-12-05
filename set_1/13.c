#include<stdio.h>

int main(void)
{
	int i, j;
	for(i = 48; i <= 126; i+=10)
	{
		for(j = 0; j < 10 && j + i <= 126; j++)
		{
			printf("%c (%d)\t", i+j, i+j);
		}
		printf("\n");
	}
	return 0;
}
