#include <stdio.h>

int main()
{
    int num, originalNum, binary = 0, rem, place = 1;
    printf("Enter a decimal number :");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        rem = num % 2;
        binary = binary + rem * place;
        place *= 10;
        num /= 2;
    }
    printf("Binary equivalent of %d is %d \n", originalNum, binary);
    return 0;
}