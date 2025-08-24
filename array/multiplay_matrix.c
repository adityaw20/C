#include<stdio.h>
int main()
{
   int arr[3][3];
   int brr[3][3];
   int crr[3][3]={};

   printf("Enter element in first array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }

   printf("Enter element in second array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&brr[i][j]);
    }
   }

   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
     for (int k = 0; i < 3; i++)
     {
        crr[i][j]+=arr[i][k]*brr[j][k];
     }
     
    }
    
   }
   



   
return 0;
}