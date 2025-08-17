#include<stdio.h>
int main()
{
    int r =21|(1<<1);
    printf("%d\n",r);

    int x=13|(1<<1);
    printf("%d\n",x);

    int y=21&~(1<<2);
        printf("%d\n",y);

          int z=21^(1<<2);
        printf("%d\n",z);




}