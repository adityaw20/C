#include<stdio.h>

int main()
{
    char ch;
    

    printf("Enter the character:\n");
    scanf("%c",&ch);

   

    switch (ch)
    {
    case 'a':
        printf("%c is Vowels",ch);
        break;

    case 'e':
        printf("%c is Vowels",ch);
        break;

    case 'i':
       printf("%c is Vowels",ch);
        break;

    case 'o':
        printf("%c is Vowels",ch);
        break;

    case 'u':
        printf("%c is Vowels",ch);
        break;
    default:
        printf("%c is CONSONANT",ch);
        break;
    }
}