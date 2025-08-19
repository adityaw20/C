#include<stdio.h>
int main()
{
    int a;
    printf("Enter the num");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is the Evnn",a);
    }
    else if (a==0)
    {
        printf("% is zero ",a);
    }
    else
    {
        printf("%d is Odd",a);
    }
    
}