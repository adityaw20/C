#include<stdio.h>
int main()
{
int arr[3][3];


printf("Enter the value in first matrix:-");
for (int i = 0; i < 3; i++)
{
  for (int  j = 0; j < 3; j++)
  {
    scanf("%d",&arr[i][j]);
  }
  
}

int flag=1;

for (int i = 0; i < 3; i++)
{
  for (int  j = 0; j < 3; j++)
  {
    if (arr[i][j]!=0)
    {
       flag=0;
    }
    
  }
  
}

if (flag)
{
    printf("The matrix is Null:-");
}
else
{
    printf("Matrix is not Null");
}



return 0;
}