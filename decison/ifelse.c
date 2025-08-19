#include<stdio.h>
int main()
{
    int a;
    printf("Enter a no:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is Even No.",a);
    }
    else
    {
        printf("%d is Odd No.",a);
    }
}