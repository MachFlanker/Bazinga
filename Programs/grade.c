#include <stdio.h>

int main()
{
    char grade;  
    int marks;
    float cgpa;

    printf("enter grade of student ");
    scanf("%c", &grade);
    printf("enter marks of student ");
    scanf("%d", &marks);
    printf("enter cgpa of student ");
    scanf("%f", &cgpa);
    printf("grade is = %c\n", grade);
    printf("marks are =%d\n", marks);
    printf("gpa is = %f\n", cgpa);   
    return 0;
}