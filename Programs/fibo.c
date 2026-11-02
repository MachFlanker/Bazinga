#include <stdio.h>

int main()
{
    int f = 0, s = 1, t, n;
    printf("%d ", f);
    printf("%d ", s);
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (int i = 3; i <= n; i++)
    {
        t = f + s;
        f = s;
        s = t;
        printf("%d ", t);
    }
    return 0;
}