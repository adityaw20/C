#include<stdio.h>
int main()
{
    int i=1;
    int count=0;
    int num=12008;
    while(num!=0)
    {
        num=num/10;
        count++;
        i++;
    }
    printf("%d ",count);
}
