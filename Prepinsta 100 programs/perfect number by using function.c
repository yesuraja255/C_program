#include<stdio.h>
void main()
{
	int n;
	int perfn(int);
	printf("enter any number:\n");
	scanf("%d",&n);
	if(n==perfn(n))
	printf("perfect number");
	else
	printf("not perfect number");
	
}
int perfn(int f)
{
	int i,sum=0;
	for(i=1;i<=f/2;i++)
	{
		if(f%i==0)
		sum=sum+i;	
	}
	return(sum);
}