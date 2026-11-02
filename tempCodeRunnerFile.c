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
    printf("grade is = %c", grade);
    printf("marks are =%d", marks);
    printf("gpa is = %f", cgpa);   
    return 0;
}