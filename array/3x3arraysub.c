#include<stdio.h>
int main()
{
  int arr[3][3];
  printf("Enter the value in fisrt  3x3 matrix:-\n");
  for (int i = 0; i <3; i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }

  int brr[3][3];
  printf("Enter the value second in 3x3 matrix:-\n");
  for (int i = 0; i <3; i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&brr[i][j]);
    }
  }

  printf(" 3x3 matrix:-\n");
  for (int i = 0; i <3; i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]-brr[i][j]);
    }
    printf("\n");
  }

  
return 0;
}