#include<stdio.h>

int main()
{
    int arr[5];
    int even=0;
    int odd=0;


    printf("Enter alue in array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d is even ",arr[i]);
            even++;
             printf("\n");
        }
        else
        {
            printf("%d is odd",arr[i]);
            odd++; 
            printf("\n");
        }
        
    }
     printf("\n there are %d Even no in this array",even);
      printf("\n there are %d odd No in this array",odd);
    
    
}