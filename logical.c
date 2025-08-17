#include<stdio.h>

int main()
{
    // AND oprtr example

    int a=100,b=80,c=500;
    int r=(a<b) && (a<c);//0 1 =0
    printf("%d\n",r);

    //for && operator when both conditions are true  then the result will be true"one" else "zero"

    

    int p=(a>b) && (b<c);//1 1=1 // here both value are true so the rsult is true
    printf("%d\n",p);

    //OR operator exmaple

    int o=(a>b) ||(b>c);//1 0=1// In OR oprtr any one value is true then result is true 
    printf("%d\n",o);


    int q=(a<b) || (b>c);//0 0 =0 // here both conditions are false then  result is false 
    printf("%d\n",q);

    //NOT oprtr example (!)

    int w=(a<b) || (b>c);//0 0=0
    printf("%d\n",!(w));// here condition is false but if you use "! not " then is become inverse
    
    int z=(a>b) || (b<c);//1 1=1
    printf("%d\n",!(z));// here value is 1 but result gives 0 due to inverse

    int t=(a>b) || (b<c);//1 1=1
    printf("%d\n",~(t)); // "~" this oprtr add the +1 value in result and give negative sign to it (1+1)=-2
}
