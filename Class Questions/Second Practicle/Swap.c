#include <stdio.h>
int swap(int x, int y)
{
  int z,u,v;
    z=x;
    x=y;
    y=z;
    u=x;
    v=y;
    return u,v;
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
    
    printf("I have %d Choclates and %d cookies",swap(b,a));
}