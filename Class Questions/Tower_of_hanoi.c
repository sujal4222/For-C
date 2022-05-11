#include <stdio.h>
int move(int n, char source, char destination, char helper_t)
{

    if(n==0){

        return 0;

    }

    move(n-1,source, helper_t,destination);

    printf("\n Move disc %d from tower %c to tower %c",n, source, destination);

    move(n-1, helper_t, destination,source);

}
int main()

{
     /*printf("Enter no. of discs\n");
     int a=0;
     scanf("%d",a);*/
    move(5,'A','B','C');
    return 0;
}