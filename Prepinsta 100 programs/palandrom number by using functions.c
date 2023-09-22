#include<stdio.h>
void main()
{
	int n,m;
	int palnd(int);
	printf("enter any number:\n");
	scanf("%d",&n);
	m=n;
	if(m==palnd(n))
	printf("palandrom number");
	else
	printf("not palandrom number");
}
int palnd(int l)
{
	int r,rev=0;
	while(l>0)
	{
		r=l%10;
		rev=rev*10+r;
		l=l/10;
	}
	return(rev);
}