#include<stdio.h>

int main()
{
    int marks;

    printf("ENter the num");
    scanf("%d",&marks);

    switch (marks/10)
    {
    case 9:
        printf("Grade is A");
        break;
    case 8:
        printf("Grade is B ");
        break;
    case 7:
        printf("Grade is C ");
        break;
    case 6:
        printf("Grade is D");
        break;
    case 5:
        printf("Grade is Fail ");
        break;
    
    default:
        printf("You are fail--couse low marks");
        break;
    }
}