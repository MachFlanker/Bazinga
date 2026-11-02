#include <stdio.h>

long long factorial(int n)
{
    long long f = 1;
    int i;
    for (i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main(void)
{
    int n, r;
    long long nCr, nPr;
    printf("Enter n and r (0<=r<=n): ");
    scanf("%d %d", &n, &r);
    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input \n");
        return 0;
    }
    nCr = factorial(n) / (factorial(r) * factorial(n - r));
    nPr = factorial(n) / factorial(n - r);
    printf("nCr = %lld , nPr = %lld \n", nCr, nPr);
    return 0;
}