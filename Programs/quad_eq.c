#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, real, imag;
    printf("Enter the coefficients of the quadratic equation respectively : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("Coefficient a cannot be zero \n");
        return 0;
    }
    double d;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different \n");
        printf("Root 1 : %f \n", root1);
        printf("Root 2 : %f \n", root2);
    }
    else if (d == 0)
    {
        double root = -b / (2 * a);
        printf("Roots are real and equal. \n");
        printf("Root : %f \n", root);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Root 1 : %f +%f \n", (double)real, (double)imag);
        printf("Root 2 : %f -%f \n", (double)real, (double)imag);
    }
    return 0;
}