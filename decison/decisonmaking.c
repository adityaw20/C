#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the marks:");
    scanf("%d",&a);

    if(a>=90 && a<=100)
    {
        printf("A grade");
    }
    if(a>=80 && a<90)
    {
        printf("B grade");
    }
    if(a>=70 && a<80)
    {
        printf("C grade");
    }
    if(a>=60 && a<70)
    {
        printf("D grade");
    }
    if(a<60)
    {
        printf("fail");
    }
}