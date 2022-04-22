#include <stdio.h>
 int main()
{ 
    printf("Enter any character from A to E\n");
    char a;
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
    case 'A':    
        printf("A for apple");
        break;
    case 'b':
    case 'B':    
         printf("B for Boy");
         break;
    case 'c':
    case 'C':    
         printf("C for Cat");
    case 'd':
    case 'D':    
         printf("D for Dog");
    case 'e':
    case 'E':    
         printf("E for Elephant");    
    default:
        printf("I dont know man");
        break;
    }
    return 0;
}