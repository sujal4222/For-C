#include <stdio.h>
int main()
{
    printf("Enter a number \n");
    int a=0;
    scanf("%d",& a);
    if(a>=0 && a<=10)
    {
        printf("\nur no. is between 0 and 10 ");
    }
    else if(a>10 && a<=20)
    {
         printf("ur no. is between 11 and 20 \n");
    }
    else{
         printf("ur no. is out of bound \n");
    }
    return 0;
}