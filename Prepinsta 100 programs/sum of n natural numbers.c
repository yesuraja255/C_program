#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter first n natural number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("sum is %d",sum);
	
}