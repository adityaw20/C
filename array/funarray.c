#include<stdio.h>

void fun(int arr[],int size)
{
  printf("Element of array is:-");
  for (int i = 0; i <size; i++)
  {
    printf("%d ",arr[i]);
  }
  
}


int main()
{
    int arr[10];
    int size=10;

    printf("Enter the input for array");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    fun(arr,size);
    
}