#include<stdio.h>

int main()
{
    int Month;

    printf("Enter a Num (1-12):-");
    scanf("%d",&Month);

    switch (Month)
    {
    case 1:
        printf("The days in january is 31");
        break;

    case 2:
        printf("The days in Fabrury is 28");
        break;

    case 3:
        printf("The days in March is 31");
        break;
    
    case 4:
        printf("The days in April is 30");
        break;

    case 5:
        printf("The days in may is 31");
        break;

    case 6:
        printf("The days in june is 30");
        break;

    case 7:
        printf("The days in july is 31");
        break;

    case 8:
        printf("The days in August is 31");
        break;

    case 9:
        printf("The days in Saptember is 30");
        break;

    case 10:
        printf("The days in Octomber is 31");
        break;

    case 11:
        printf("The days in November is 30");
        break;

    case 12:
        printf("The days in December is 31");
        break;        

    default:
        printf("Enter corret input");
        break;
    }
}