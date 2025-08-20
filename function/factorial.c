#include<stdio.h>

void factorial( fact)
{
    int n=1;
    for(int i=1;i<=fact;i++)
    {
        n=n*i;
    }
    printf("%d ",n);
}

int main()
{
   int fact;
   printf("enter the Num:"); 
   scanf("%d",&fact);
   factorial(fact);
}