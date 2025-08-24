#include<stdio.h>

void fun(int arr[],int size,int index)
{
  
  if (index==size)
  {
    return 1;
  }
  else
  {
    printf("%d ",arr[index]);
    fun(arr,size,index+1);
  }
  
  
}


int main()
{
    int arr[10];
    int size=10;
    int index=0;

    printf("Enter the input for array");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    fun( arr, size, index);
 
    
}