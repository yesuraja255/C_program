#include <stdio.h>
void main()
{
	int n,i,j;
	printf("enter no.of rows  ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		printf("%d  ",i);
		printf("\n");
	}
}