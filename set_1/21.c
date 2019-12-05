//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>

int main(void)
{
	int id, msg, sec;
	float cost, vat;
	printf("Please enter your customer id, your talking time and the number of sms sent:\n");
	scanf("%d %d %d", &id, &sec, &msg);
	cost = 12+0.02*sec+0.14*msg;
	vat = 0.02*sec*0.23+12*0.23+0.14*msg*0.23;
	cost += vat;
	printf("----------------------------------------------------------\n");
	printf("Customer code:\tTime:\tSMS:\tVAT:\t|\tTotal:\n");
	printf("%d\t\t%d\t%d\t%f\t%f\n", id, sec, msg, vat, cost);
	printf("__________________________________________________________\n");
	return 0;
}
