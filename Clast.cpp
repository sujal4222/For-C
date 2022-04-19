#include <stdio.h>
int main()
{
	  char ch;
	   int sum,sub,mul,mod;
	printf("Enter first No.\n");
	int num1;
	scanf("%d",&num1);                    // Inputs Radius from user
    printf("Enter second No.\n");
	int num2;
	scanf("%d",&num1); 
	   printf("Enter The operation\n A- Addition \n S- Subtraction \n D-Division \n M-Multiplication \n R- Modulus\n");
	   scanf("%c",&ch);
	    sum=num1+num2;
	    sub=num1-num2;
	   float div=num1/num2;
	    mul=num1*num2;
	    mod=num1%num2;
	   switch(ch)
	   {
	   	case 'A':
	   		  printf("\n Sum=",sum);
	   		  break;
	   		case 'S':
	   		  printf("\n Difference=",sub);
	   		  break;
				 	case 'D':
	   		  printf("\n Division=",div);
	   		  break;
				 	case 'M':
	   		  printf("\n Multiplication=",mul);
	   		  break;	  	
	   		  	case 'R':
	   		  printf("\n Remainder=",mod);
	   		  break;
	   		  
	   		  default:
	   		  	printf("Error");
	   }
	return 0;
}
	
