#include<stdio.h>
int main()
{
    int a=10;
    int b=20;

    printf("a=%d,b=%d\n",a,b);

    int c=a;
    a=b;
    b=c;
    
    printf("a=%d,b=%d",a,b);
}