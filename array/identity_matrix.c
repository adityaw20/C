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

 printf("\n Identity  matrix:-");int identity=1;
 for (int i = 0; i < 3; i++)
 { for(int j=0;j<3;j++)
    {
        if (i==j  && arr[i][j]!=1)// jr ij index same asel ani aj index 1 nasel tr identity 0 kara
        {
          identity=0;
        }
        else if(i!=j && arr[i][j]!=0)// jr ij index equal nasel ani ij index eqaul 0 nasel tr identity 0 kara
        {
          identity=0;
        }
    } 
    
 }
 if (identity)
 {
    printf("It iS identity");
 }

 else
 {
    printf("It iS not identity");
 }
 
 
 
return 0;
}