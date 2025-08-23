#include<stdio.h>

int  main()
{
    int sum=0,n;

    printf("Enter the num:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
        
    }

    printf("%d",sum);
}