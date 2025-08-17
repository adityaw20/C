#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter value to relate:");
    scanf("%d%d",&a,&b);

    printf("%d\n",(a>b));
    printf("%d\n",(a<b));
    printf("%d\n",(a>=b));
    printf("%d\n",(a<=b));
    printf("%d\n",(a==b));
    printf("%d\n",(a!=b));
}