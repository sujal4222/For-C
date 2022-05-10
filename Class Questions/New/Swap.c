#include <stdio.h>
int swap(int *x,int *y)
{
  int z;
    z=*x;
    *x=*y;
    *y=z;
  
}

 int main()
{
    printf("I have 'X' Choclates and 'Y' cookies\n");
    printf("Enter value for 'X'");
    int a;
    scanf("%d",&a);
    printf("\nEnter value for 'y'");
    int b;
    scanf("%d",&b);
    swap(&a,&b);
     printf("\nI have %d Choclates and %d cookies",a,b);
     return 0;
    }
