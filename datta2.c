#include<stdio.h>
int main()
{
    int a=30;
    int b=20;

    printf("before swap a=%d, b=%d\n",a,b);

    // int c;
    // c=a;
    // a=b;
    // b=c;
    // printf("after swap a=%d, b=%d\n",a,b);

    a=a^b;//
    b=a^b;
    a=a^b;

    printf("a=%d,b=%d",a,b);
}