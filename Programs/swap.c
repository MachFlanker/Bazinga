#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the value of a and b : ");
    scanf("%f %f", &a, &b);
    printf("Before swapping : a = %f , b = %f \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping : a = %f , b = %f \n", a, b);
    return 0;
}