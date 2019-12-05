//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, x2, y1, y2;
	printf("Please enter the coordinates of the first point:\n");
	scanf("%lf %lf", &x1, &y1);
	printf("Please enter the coordinates of the second point:\n");
	scanf("%lf %lf", &x2, &y2);
	printf("The distance between these two points is: %f\n", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));
	return 0;
}
