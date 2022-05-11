#include <stdio.h>
int raised(int x, int y)
{
  int result=1;
    for(int i=1;i<=y;i++)
    {
        result=result*x;
    }
    return result;
}
 main()
{
    printf("Enter No.");
    int a;
    scanf("%d",&a);
    printf("Enter raised to power factor");
    int b;
    scanf("%d",&b);
    int d=raised(a,b);
    printf("%d",d);
}