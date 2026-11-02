#include <stdio.h>

int main()
{
    float b, h;
    printf("Enter base and height of triangle : ");
    scanf("%f %f", &b, &h);
    float area = (0.5 * b * h);
    printf("Area of triangle : %f \n", area);
    return 0;
}