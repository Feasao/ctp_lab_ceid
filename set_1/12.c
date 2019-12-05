//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
        int mode;
        double metric, euro;
        printf("Please enter:\n0 for currency converter\n1 for length unit converter\n");
        scanf("%d", &mode);
        if(mode)
        {
        	printf("Please enter the length to be converted (in meters):\n");
        	scanf("%lf", &metric);
        	printf("The length you entered in inches:\n%f\n", metric*(1/0.0254));
        }
        else
        {
        	printf("Please enter the amount of money to be converted (in euros):\n");
        	scanf("%lf", &euro);
        	printf("The amount of money you entered in drachmas:\n%f\n", euro*340.75);
        }
        return 0;
}
