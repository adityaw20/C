#include<stdio.h>

void evenodd()
{
    int a;
    printf("ENter a number to check Even or Odd");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("%d is Even Number",a);
    }
    else if(a==0)
    {
        printf("%d is Zero",a);
    }
    else
    {
        printf("%d is Odd NO",a);
    }
    
    
}



int main()
{
   evenodd();
}