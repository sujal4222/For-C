#include <stdio.h>
int main()
{
    printf("Enter a number \n");
    int a=0;
    scanf("%d",& a);
     printf("Reverse count is \n");
    for(int i=a;i>=0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}