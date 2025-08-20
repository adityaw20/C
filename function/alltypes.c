#include<stdio.h>

// NO return type no argument
void add()//fun declaration after that  // function defination
   {
    int a=20;int b=25;
    int c=a+b;
    printf("substracion is:%d\n",c);
   }

// NO return type With argument
void sub(int a,int b)
{
    int c=a-b;
    printf("Addition is:%d\n",c);
}

//With return type with argumnets
int multi(int x,int y)
{
    int z=x*y;
    printf("The multiplication is:%d\n",z);
}

// With return type no argument
int div()
{
    int s=100;
    int t=10;
    int r=s/t;
    return r;
}

int main()
{
   add();// function call
   sub(500,250);//NO return with argument 
   multi(10,20);// return type with argument
   int q=div();//return type with no argumnet
   printf("%d",q);
}