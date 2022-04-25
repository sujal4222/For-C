#include <stdio.h>
int prime(int a)
{
    int count=0;
	for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
    }
    if(count>=3)
    return 0;
    else
    return 1;
}
int main()
{
	printf("Enter Any no.\n");
	int x;
	scanf("%d",&x);   
    int result=prime(x);
    if(result==0)
    printf("%d 'The No. is not prime'",result);          
	else
    printf("%d 'The No. is Prime",result);
    return 0;
}