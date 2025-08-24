#include<stdio.h>
int main()
{
    int arr[6];
    printf("Enter the elemnet in array:-");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n elemnet in array:-");
    for (int i = 0; i < 6; i++)
    {
        printf("%d",arr[i]);
    }
    
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j=i+1; j<6;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("Number found at %d\n",i);
            }
            
        }
        
    }
    
return 0;
}