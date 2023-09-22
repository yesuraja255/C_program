#include <stdio.h>
void main()
{
	int n,i,j;
	printf("enter no.of rows  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("%d  ",j);
		printf("\n");
	}
}