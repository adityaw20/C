#include<stdio.h>
 
void sum()// here void is data type and sum is fun name //    
{                        //it is example of  no data type No arguments   
    int a,b,sum=0;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("Sum is %d\n",sum);
}


int main()
{
   sum();
}