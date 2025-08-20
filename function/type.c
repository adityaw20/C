#include <stdio.h>

int add(); ////fun declaration
int sub(int a, int b);
void mul();
void div();

int main()
{

    int x = add(); /// fun call
    printf("%d \n", x);

    printf("%d\n", add());

    int y = add();

    printf("%d \n", y);

    int g = sub(99, 45); ////fun call
    printf("%d is the result of sub ", g);

    div(90, 6);

    mul();
}

////fun defination
int add()
{
    int a = 67;
    int b = 56;

    int c = a + b;
    return c;
}

// with parameter with return type
int sub(int a, int b)
{
    return a - b;
}

////without return type without parameter
void mul()
{
    int a = 4;
    int b = 90;
    int c = a * b;
    printf(" result of multiplication %d", c);
}

/// without return type with parametr

void div(int a, int b)
{
    int c = a / b;
    printf("%d is the result of div \n", c);
}