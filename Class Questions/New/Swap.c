#include <stdio.h>
int swap(int* x,int* y)
{
  int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("I have %d Choclates and %d cookies",x,y);
}

 main()
{
    printf("I have 'X' Choclates and 'Y' cookies");
    printf("Enter value for 'X'");
    int a;
    scanf("%d",&a);
    printf("Enter value for 'y'");
    int b;
    scanf("%d",&b);
     printf("I have %d Choclates and %d cookies",a,b);
    swap(a,b);
}