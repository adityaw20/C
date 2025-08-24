#include<stdio.h>
int main()
{
int arr[5]={3,6,2,4,5};int temp;
for (int i = 0; i < 5; i++)
{
   printf("%d ",arr[i]);
}


printf("\n");

for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j <5; j++)
    {
       if (arr[i] > arr[j])
       {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
       }
       
    }
    
}
for (int i = 0; i < 5; i++)
{
   printf("%d ",arr[i]);
}
return 0;
}