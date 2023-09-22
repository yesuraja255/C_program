#include<stdio.h>
void main()
{
	int n,m;
	int digitfactsum(int*);
	printf("enter any number:\n");
	scanf("%d",&n);
	m=n;
	if (m==digitfactsum(&n))
	printf("given number is strong");
	else
	printf("not a strong number");
	
}
int digitfactsum(int* p)
{
	int sum=0,fact,r,i;
	while(*p!=0)
	{
		r=*p%10;
		fact=1;
		for(i=1;i<=r;i++)
			fact=fact*i;
		sum=sum+fact;
		*p=*p/10;
	}
	return(sum);
}