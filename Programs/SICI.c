#include <stdio.h>
#include <math.h>

int main()
{
    float p, t, r, si, ci, a;
    printf("enter p, t, r values ");
    scanf("%f %f %f", &p, &t, &r);
    si = (p * t * r) / 100;
    printf("Simple intrest is = %.2f\n", si);
    a = p * pow((1 + r / 100), t);
    ci = a - p;
    printf("Compound intrest is = %.2f\n", ci);
    return 0;
}