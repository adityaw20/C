#include<stdio.h>

int main(){
    int a=0,b=1,c=0;
    printf(" %d %d ",a,b);
    for (int i = 0; i <10; i++)
    {
        c=a+b;

        printf("%d  ",c);

        a=b;
        b=c;
    }
    

}