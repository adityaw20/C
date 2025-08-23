#include<stdio.h>
int main()
{
    int num=10,count=0;

    for(int i=2;i<=num/2;i++)
    {
        
        if(num%i==0)
        {
           count++; 
        }
        
    }
    if (count==0)
        {
           printf("%d is Prime No",num);
        }
        
        else
        {
            printf("%d  No is Not Prime\n",num);
        }
}