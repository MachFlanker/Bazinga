#include <stdio.h>

int main(void)
{
    int n, temp, digit, count = 0, reverse = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    temp = n;
    do
    {
        digit = temp % 10;
        count++;
        reverse = reverse * 10 + digit;
        temp /= 10;
    } while (temp > 0);
    printf("Digits = %d \n", count);
    if (reverse == n)
        printf("Palindrome \n");
    else
        printf("Not palindrome \n");
    return 0;
}