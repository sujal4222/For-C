#include <stdio.h>  //imported i/o classes
int main()//declared a fxn
{  //body
     printf("Enter a no.\n");
     int a;
     scanf("%d",&a);
     printf("Enter another no.\n");
     int b;
     scanf("%d",&b);
     int c=a+b;
     printf("Sum of no. is %d",c);
    return 0;// closes the fxn
}


/*
scanf("directory type %",&a);
int
scanf("%d",&a);
float
scanf("%f",&a);
char
scanf("%c",&a);
*/
