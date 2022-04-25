#include <stdio.h>
int factorial(int a)
{
    int mul=1;
    for(int i=1;i<=a;i++)
    {
        mul=mul*i;
    }
    return mul;
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