#include<stdio.h>
void main()
{
	int n1,n2,n3,t,r;
	printf("enter n1,n2,n3");
	scanf("%d%d%d",&n1,&n2,&n3);
	t=n1>n2?n1:n2;
	r=t>n3?t:n3;
	printf("%d is largest",r);

}