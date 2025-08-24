#include<stdio.h>

int search(int arr[],int target,int size)
{
    int first =0;
    int last=size-1;

    while (first<=last)
    {
      int mid=(first+last)/2;
      if (arr[mid]==target)
      {
      return mid;
      }
      else if (arr[mid]>target)
      {
         last=mid-1;
      }
      else if (arr[mid]<target)
      {
        first=mid+1;
      }      
    }
    
}

int main()
{
     int arr[5]; int size=5,target;
     printf("ENter value in array:-\n");

     for (int i = 0; i <= 5; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     printf("Enter target value:-");
     scanf("%d",&target);

     int res= search(arr,target,size);
     if (res !=-1)
     {
       printf("%d is found at %d index",target,res);
     }
     
   
      
}