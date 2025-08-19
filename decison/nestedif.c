#include<stdio.h>
int main()
{
    int marks,attend;

    printf("Enter your Marks and attendance");
    scanf("%d%d",&marks,&attend);

    if (marks>=80)
    {
        if(attend>=90)
        {
            printf("Student is eligible for 100  scholership");
        }
        else
        {
            printf("Student is not eligible for scholership");
        }
    }
    else
    {
        if(marks<80 & attend>=60)
        {
            printf("Student is  eligible for 50 scholership...");
        }
        else
        {
            printf("Student is not eligible for scholership...");
        }
    }
    
}