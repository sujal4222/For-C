#include <stdio.h>
 int main()
{ 
    float p,Si=0;
    int t;
    printf("Enter Principle Value\n");
    scanf("%f",&p);
    printf("Enter Time period(a complete yr.)\n");
    scanf("%d",&t);
    Si=p*24*t/100;
    printf("Principle value=%f",p);
    printf("\nRate by Bank= 24");
    printf("\nTime  period=%d",t);
    printf("\nSimple Intrest=%f\n",Si);
    return 0;
}    