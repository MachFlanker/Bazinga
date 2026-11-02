#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Choose an operation : \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("Enter the choice (1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result : %d\n", a + b);
        break;
    case 2:
        printf("Result : %d \n", a - b);
        break;
    case 3:
        printf("Result : %d \n", a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Result : %f \n", (float)a / b);
        }
        else
        {
            printf("Division by zero is not allowed \n");
        }
        break;
    default:
        printf("Invalid choice !");
    }
    return 0;
}