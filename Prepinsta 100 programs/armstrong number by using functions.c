#include<stdio.h>
#include<math.h>
void main()
{
	int n,m;
	int arm(int*);
	printf("enter any number:\n");
	scanf("%d",&n);
	m=n;
	if(m==arm(&n))
	printf("armstrong number");
	else
	printf("not armstrong number");		

}
int arm(int* p)
{
	int sum=0,cnt=0,r,m;
	m=*p;
	while(*p>0)
	{
		cnt++;
		*p=*p/10;
	}
	*p=m;
	while(*p>0)
	{
		r=*p%10;
		sum=sum+pow(r,cnt);
		*p=*p/10;
	}
	return(sum);
}