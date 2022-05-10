#include <stdio.h>
int factorial(int a)
{
    if(a==1)
    {return 1;}
   else
   return a*factorial(a-1);
}
int main()
{
    printf("Enter the number");
    int x;
    scanf("%d",&x);
    int fac=factorial(x);
    printf("Factorial=%d",fac);
    return 0;
}