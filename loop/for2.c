#include<stdio.h>
int main()
{
    int sum=1;
    
    for(int i=1;i<=4;i++)
    {
        sum=i*sum;
    }
    printf("%d\n",sum);
}