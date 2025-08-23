#include<stdio.h>
int n=1;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        n=i*n;
    }
    printf("%d",n);
}