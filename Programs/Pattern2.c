#include <stdio.h>

int main(void)
{
    int row, col, height = 5;
    for (row = 1; row <= height; row++)
    {
        for (col = 1; col <= row; col++)
        {
            if (row == height || col == 1 || col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}