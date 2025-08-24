#include<stdio.h>
int main()
{
  int arr[3][3]; int brr[3][3];

   printf("Enter element  in  first array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
   }
   printf("Enter element  in  second array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&brr[i][j]);
    }
    
   }
   int flag=1;
   printf("output of matrix:-\n");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
       if(arr[i][j]!=brr[i][j])
       {
        flag=0;
       }
    }
    printf("\n");
   }

   if (flag)
   {
    printf("both matrix are equal");
   }
   else
   {
    printf("Both are not equal");
   }
   

return 0;
}