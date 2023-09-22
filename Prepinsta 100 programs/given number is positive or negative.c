#include<stdio.h>
void main()
{int num;
printf("enter any number");
scanf("%d",&num);
if (num>=0)
{
	if(num==0)
	printf("the number is zero");
	else
	printf("the number is positive");
}
else 
printf("the number is negative");
}
