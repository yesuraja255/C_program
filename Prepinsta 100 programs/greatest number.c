#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("enter num1 & num2 Values");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	printf("bothe are equal");
	else
	temp=num1>num2?num1:num2;
	printf("%d is largest",temp);
	
}