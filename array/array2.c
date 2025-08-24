#include<stdio.h>
int main()
{
    int arr[5];
    printf("ENter the value in array:-");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n");int search;

     printf("ENter the value in numbers:-");
     scanf("%d",&search);

    for (int i = 0; i < 4; i++)
    {
        if (arr[i]==search)
        {
            printf("INdex is  %d",i);
        }
        
    }
    

return 0;
}