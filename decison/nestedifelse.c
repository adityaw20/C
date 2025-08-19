#include<stdio.h>
int main()
{
    int age;
    printf("ENter the Age:-");
    scanf("%d",&age);

    if(age>=18)
    {
         if(age>=60)
           {
                printf("You are eligible forvoting\n Youare senior citizen");
           }
          else
          {
            printf("You are eligible for voting \n you are young");
          }         
    }
    else
    {
        if (age>=13)
        {
            printf("You are teenager\n  you have to wait for %d yers to vote",(18-age));
        }
        else
        {
            printf("Your are child\n you have to wait for %d years ",(18-age));
        }
    }  
}