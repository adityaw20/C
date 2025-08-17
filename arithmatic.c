#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two values:");
    scanf("%d%d",&a,&b);

    printf("Addition is:%d\n",(a+b));

    printf("Substraction is:%d\n",(a-b));
    printf("Multiplication is:%d\n",(a*b));
    printf("Division is:%d\n",(a/b));
    printf("MOd is:%d\n",(a%b));
}