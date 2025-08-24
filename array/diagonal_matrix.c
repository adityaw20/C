#include<stdio.h>
int main()
{
 int arr[3][3];
 printf("Enter the element in matrix:-\n");
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
 }

 printf("\nDiagonal Element of matrix:-");
 for (int i = 0; i < 3; i++)
 {
    printf("%d  ",arr[i][i]);
 }
 
 
return 0;
}