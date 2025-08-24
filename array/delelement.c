#include<stdio.h>
int main()
{
    // delete array element by index

    int arr[5];
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
      int position;
      printf("\n Enter the number to delete from array:-");
      scanf("%d",&position);

     
    for (int i = position; i <n-1 ; i++)
    {
            arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deleting the element:-");
    for (int i = 0; i < n; i++)
    {
       printf("%d",arr[i]);
    }
    


    
return 0;
}