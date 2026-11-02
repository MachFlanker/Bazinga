#include <stdio.h>

int main(void)
{
    int n, i, d, prime = 1;
    long long fact = 1, sum = 0;
    printf("Enter n (0 or greater): ");
    scanf("%d", &n);
    if (n < 2)
        prime = 0;
    for (d = 2; d * d <= n; d++)
        if (n % d == 0)
        {
            prime = 0;
            break;
        }
    if (prime)
        printf("Prime \n");
    else
        printf("Not prime \n");
    for (i = 1; i <= n; i++)
    {
        fact *= i;
        sum += fact;
    }
    printf("1! + ... + %d! = %lld \n", n, sum);
    return 0;
}