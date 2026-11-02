#include <stdio.h>

int main()
{
    int num, sum = 0, count = 0;
    printf("Enter a number : \n");
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
        count++;
    }
    printf("Sum of digit : %d \n", sum);
    printf("Number of digit : %d \n", count);
    return 0;
}