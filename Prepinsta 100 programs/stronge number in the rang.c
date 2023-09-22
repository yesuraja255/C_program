#include<stdio.h>
void main()
{
	int r,fact,i,m,min,max,sum;
	printf("enter min\n and max values");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		m=i;
		fact=1;
		while (m>0)
		{
			r=m%10;
			fact=fact*r;
			sum=0;
			sum=sum+fact;
		    m=m/10;
		}
		if(sum==i)
		printf("%d,",i);
	}
}