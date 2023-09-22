#include <stdio.h>
void main()
{
	int n,i,j;
	printf("enter no.of rows  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		printf("%d  ",j);
		printf("\n");
	}
}