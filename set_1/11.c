//The following code assumes its inputs are going to conform to the expected values and does not handle exceptions.

#include<stdio.h>
#include<math.h>

int main(void)
{
        double a, b, c, disc, r1, r2;
        printf("Please enter the coefficients of the quadratic equation:\n");
        scanf("%lf%lf%lf", &a, &b, &c);
        disc = pow( b, 2) - 4*a*c;
        if(disc > 0)
        {
                r1 = ((-1) * b + sqrt( disc ))/(2 * a);
                r2 = ((-1) * b - sqrt( disc ))/(2 * a);
                printf("The roots of the quadratic equation %fx^2 + %fx + %f = 0 are:\n%f\n %f\n", a, b, c, r1, r2);
        }
        else if(!disc)
        {
                r1 = ((-1) * b)/(2 * a);
                printf("The root of the quadratic equation %fx^2 + %fx + %f = 0 is: %f\n", a, b, c, r1);
        }
        else
        {
                printf("The quadratic equation %fx^2 + %fx + %f = 0 has no real roots.", a, b, c);
        }
        return 0;
}
