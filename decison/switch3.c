#include<stdio.h>

int main()
{
    char z;
    int a,b;

    printf("Enter the character:\n");
    scanf("%c",&z);

    printf("Enter the two num:-");
    scanf("%d%d",&a,&b);

    switch (z)
    {
    case '+':
        printf("The Addition is:%d",(a+b));
        break;

    case '-':
        printf("The Substraction is:%d",(a-b));
        break;

    case '*':
        printf("The Multi is:%d",(a*b));
        break;

    case '/':
        printf("The Divison is:%d",(a/b));
        break;

    case '%':
        printf("The Modulus is:%d",(a%b));
        break;
    default:
        printf("Enter correct input");
        break;
    }
}