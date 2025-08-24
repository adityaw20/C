#include<stdio.h>
int main()
{
int arr[5]={1,2,3,5,5};

printf("Size of array is:-%d\n",sizeof(arr));
printf("No of Elements in array is:-%d",sizeof(arr)/sizeof(arr[0]));
return 0;
}