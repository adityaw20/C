#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two num:-");
    scanf("%d%d",&a,&b);

    switch (a>b)
    {
    case 1:
        printf("A is Greater than B");
        break;

    case 0:
        printf("B is Greater than A");
        break;
    
    default:
        printf("Enter correct input");
        break;
    }
}