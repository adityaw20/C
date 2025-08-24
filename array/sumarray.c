#include<stdio.h>

int main()
{

int arr[5]={1,2,3,4,5};
int sum=0;

printf("\nArray in reverse order\n");

for(int i=4;i>=0;i--)
{
    printf("%d ",arr[i]);
    
}
printf("\n\n");

//Addition of all element in array 

for(int i=4;i>=0;i--)
{
    sum+=arr[i];
    
}
    printf("addition of array:%d ",sum);

}