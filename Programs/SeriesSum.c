#include <stdio.h>

int main(void)
{
    int n, i;
    double x, term = 1.0, sum = 1.0;
    printf("Enter x and highest power n: ");
    scanf("%lf %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        term = term * x / i;   /* now term is x^i / i! */
        sum += term;
    }
    printf("Series Sum = %.6f \n", sum);
    return 0;
}