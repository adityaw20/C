#include<stdio.h>

void cube(int c)
{
    printf("ENter the Num:-");
    scanf("%d",&c);

    int cube=c*c*c;
    printf("Cube is %d",cube);
}

int main()
{
      int c;
      
      cube(c);
}