#include<stdio.h>

int main()
{
    int week;

    printf("Enter a Num (1-7):-");
    scanf("%d",&week);

    switch (week)
    {
    case 1:
        printf("The day is monday");
        break;

    case 2:
        printf("The day is Tuesday");
        break;

    case 3:
        printf("The day is Wednesday");
        break;
    
    case 4:
        printf("The day is Thursday");
        break;

    case 5:
        printf("The day is Friday");
        break;

    case 6:
        printf("The day is Saturday");
        break;

    case 7:
        printf("The day is Sunday");
        break;

    default:
        printf("Enter corret input");
        break;
    }
}