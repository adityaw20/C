#include<stdio.h>

void diameter()// fn declr with defination// no return no argumnet
{
    int r=10;
    int diam=r*2;
    printf("Diameter is%d\n",diam);
}

void circumference(int r)// no return with argumnet 
{
    int circum=2*3.14*r;
    printf("Circumference is :%d\n",circum);
}

int area(int r) // with return with argument
{
int area=3.14*r*r;
return area;
}


int main()
{
   diameter();

   circumference(10);
 
   printf("Area of cicle %d",area(10));
}