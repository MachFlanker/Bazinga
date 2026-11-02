#include <stdio.h>

int main(void)
{
    int a, b, x, y, r, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    gcd = x;
    lcm = (a / gcd) * b;
    printf("GCD = %d , LCM = %d \n", gcd, lcm);
    return 0;
}