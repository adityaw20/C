#include<stdio.h>

int main()
{
    int aaa[5]; //array declaration
    
    // aaa[5]={1,36,36,36};

   // int zz[]; // NOt valid -- size not mention

    int bbb[5]={1,2,3,50,60};//declaration with init
      
    ///printing the bbb array one after another

    for (int  i = 0; i < 5; i++)
    {
        printf("%d  ",bbb[i]);
    }
    
     //taking input for aaa array and printing 
      printf("\nEnter the input:-");
     for (int i = 0; i < 5; i++)
     {
        scanf("%d",&aaa[i]);
     }
     
     printf("\nEnterd input is :-");
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",aaa[i]);
     }

     // updating the vaalue for array  and printng 
     bbb[3]=99;
     bbb[4]=963;

     for (int i = 0; i < 5; i++)
     {
        printf("\n%d ",bbb[i]);
     }
     printf("\n");

     //// printing the addresss of array
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",&bbb[i]);
     }
     printf("\n");

     // init two value and other values are set to 0
     int ccc[5]={1,2};

     for (int i = 0; i < 5; i++)
     {
        printf("%d ",ccc[i]);
     }
     
     // printing memory address in hexa decimal 
    printf("\n");
    for (int i = 0; i < 5; i++)
     {
        printf("%X ",&ccc[i]);
     }
}  