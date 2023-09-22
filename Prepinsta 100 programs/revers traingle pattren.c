#include <stdio.h>
void main()
{
	int n,i,j;
	printf("enter no.of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		printf("%d  ",j);
		printf("\n");
	}
}