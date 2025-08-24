#include<stdio.h>
int main()
{
int brr[3][3];

   printf("Enter element s in array:-");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&brr[i][j]);
    }
    
   }

   printf("transpose matrix:-\n");
   for (int i = 0; i < 3; i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("%d ",brr[j][i]);
    }
    printf("\n");
   }

return 0;
}