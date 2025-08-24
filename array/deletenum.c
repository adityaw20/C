#include<stdio.h>
int main()
{
    // delete array element by number

    int arr[6];
    int n=5;
    printf("Enter the elments in array:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements in array:-");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    int num;
     printf("\n Enter the number to delete from array:-");
    scanf("%d",&num); 
    

    for (int  i = 0; i < n; i++)
    {
        
        if (arr[i]==num)
        {
            
            for (int  j = i; j <n-1; j++)
            {
                arr[j]=arr[j+1]; 
            }
        }
        
    }
    
    {
    printf("Array after deleting the element:-\n");
    for (int i = 0; i < n-1; i++)
    {
       printf("%d",arr[i]);
    }
    }
   
    
    
    
}
