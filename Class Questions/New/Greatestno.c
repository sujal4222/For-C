#include <stdio.h>
int greatest(int a, int b, int c)
{
	if(a>b && a>c)
	return a;  
	else if(b>a && b>c)
	 	return b; 
	else if(c>a && c>b)
	 	return c;
	return 0;
}
main()
{
	printf("Enter First No.\n");
	int x;
	scanf("%d",&x);             
		printf("Enter Second No.\n");
	int y;
	scanf("%d",&y);       
		printf("Enter Third No.\n");
	int z;
	scanf("%d",&z);   
	int G=greatest(x,y,z);
	printf("Greatest no. is %d\n",G);
}