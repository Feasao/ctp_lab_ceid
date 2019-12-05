#include<stdio.h>

int main(void)
{
	int x = 3, y = 3, z = 1, w = 15, a = 14, b = 3;
	printf("y+z/x = %d\n", y+z/x);					//3
	printf("w*x/y/z = %d\n", w*x/y/z);				//15
	printf("w/x*++z+x/y = %d\n", w/x*++z+x/y);			//11
	printf("++b, --a = %d\n", ++b, --a);				//4
	printf("(--b, ++a) = %d\n", (--b, ++a));			//14
	printf("(a > b) ? b : a = %d\n", (a > b) ? b : a);		//3
	return 0;
}
