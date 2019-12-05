//The following code assumes its inputs are going to conform to the expected values has limited exception handling.

#include<stdio.h>

#define PIN 2014

int main(void)
{
	int pswd, mode;
	unsigned long funds = 100, withdraw, deposit;
	while(1)
	{
		printf("Please enter your PIN:\n");
		scanf("%d", &pswd);
		if(pswd == PIN)
		{
			break;
		}
	}
	while(1)
	{
		printf("Available transactions:\n1. View funds\n2. Make a deposit\n3. Make a withdrawal\n4. Exit\n");
		scanf("%d", &mode);
		switch(mode)
		{
			case 1:
				printf("Your account has %d $ in it.\n", funds);
				break;
			case 2:
				printf("Please enter the amount of money you wish to deposit:\n");
				scanf("%d", &deposit);
				funds += deposit;
				break;
			case 3:
				printf("Please enter the amount of money you wish to withdraw:\n");
				scanf("%d", &withdraw);
				if(withdraw > funds)
				{
					printf("Your account doesn't have enough money to complete this transaction.\n");
				}
				else
				{
					if(withdraw%20 == 0)
					{
						funds -= withdraw;
					}
					else
					{
						printf("You have requested a withdrawal of an invalid amount of money.\n");
					}
				}
				break;
			case 4:
				return 0;
			default:
				return 1;
		}
	}
	return 0;
}
