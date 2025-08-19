#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible\n");
        printf("You have to wait for %d years",(18-age));
    }
}