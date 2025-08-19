#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three No:");
    scanf("%d%d%d",&a,&b,&c);//input 

    if(a>b&a>c)
    
        printf("A is greater than B and C \n");// if can execute without using curly braces upto certain statements
    
    if (b>a&b>c)
    {
    printf("B is greter than both");
    }
    if (c>a&c>b)
    {
        printf("C is greter than both");
    }
    
    
}