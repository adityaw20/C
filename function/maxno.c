#include<stdio.h>

void maxmin(int a,int b)
{
    if (a>b)
    {
        printf("A is max and B is min");
    }
    else
    {
        printf("B is max and A is min");
    }
    
}


int main()
{
   int a,b;
   printf("Enter teo num:-");
   scanf("%d%d",&a,&b);

    maxmin(a,b);
}  