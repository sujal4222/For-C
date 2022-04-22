#include <stdio.h>
int main()
{
    printf("Enter any character between A and D\n");
     char a;
     scanf("%c",&a);
     switch(a)
    { case 'A':
      case 'a':
     printf("Apple");
     break;
     case 'B':
     case 'b':
     printf("Ball");
     break;
     case 'C':
     case 'c':
     printf("Cat");
     break;
     case 'D':
     case 'd':
     printf("Dog");
     break;
     default:
     printf("Dont be oversmart");
    }
     return 0;

}


/* switch(variable)
   case <test expression>:
   printf("");
   break;
   default:
   printf("");*/
