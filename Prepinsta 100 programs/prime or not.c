#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("enter any number");
	scanf("%d",&n);
	if(n==1)
	printf("not a prime number");
    else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				printf("not a prime number");
				exit(0);
			}
		}
		printf("given number is prime");	
	}
	
}