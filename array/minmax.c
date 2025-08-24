#include<stdio.h>

int main()
{
    //smallest element in array

    int arr[5]={10,200,3,4033,1};
   
  int min=arr[0];

    for (int  i = 0; i<4; i++)
    {
        if (min>arr[i+1])
        {
            min=arr[i];
        }
    }
    printf("Smallest element in array is: %d",min);

    printf("\n\n");






//maximum element in array

    
   
    int max=arr[0];

    for (int  i = 0; i < 5; i++)
    {
        if (max<arr[i+1])
        {
            max=arr[i+1];
        }
    }
    printf("max element in array is: %d",max);
}