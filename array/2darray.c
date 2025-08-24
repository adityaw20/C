#include<stdio.h>
int main()
{
    ///printing 2d array or 2x2 matrix
   int arr[2][2]={{1,2},{3,4},{5,6}};

   for (int i = 0; i < 2; i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
   }
   printf("\n");

   //3 x3 matrix or 
   int brr[3][3];

   printf("Enter element s in array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&brr[i][j]);
    }
    
   }

   printf("output of matrix:-\n");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("%d",brr[i][j]);
    }
    printf("\n");
   }


return 0;
}