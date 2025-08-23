#include<stdio.h>

int main()
{
    int num;
    printf("Enter No to check it even or not");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    
    
}