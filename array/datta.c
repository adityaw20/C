#include<stdio.h>
int main()
{
    int arr[5]={10,12,23,34,56};
    int s;
    printf("Entr the no to check :-");
    scanf("%d",&s);
    
    for (int i = 0; i < 5; i++)
    {
       if (arr[i] == s)
       {
        printf("No found at index:-%d",i);
       }
       
    }
    
return 0;
}