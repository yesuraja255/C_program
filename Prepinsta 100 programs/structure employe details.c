#include<stdio.h>
struct emp
{
	int eid;
	char ename[30];
	float salary,hra,da,ta,it,pf,gross,net;
};
void main()
{
	struct emp e;
	printf("enter emp id:");
	scanf("%d",&e.eid);
	fflush(stdin);
	printf("enter emp name:");
	gets(e.ename);
	printf("enter emp salary:");
	scanf("%f",&e.salary);
	e.hra=e.salary*0.1;
	e.da=e.salary*0.07;
	e.ta=e.salary*0.08;
	e.it=e.salary*0.05;
	e.pf=e.salary*0.06;
	e.gross=e.salary+e.hra+e.da+e.ta+e.it+e.pf;
	e.net=e.gross-e.pf-e.it;
	printf("emp id:%d\n",e.eid);
	printf("emp name:%s\n",e.ename);
	printf("emp salary=%f\n",e.salary);
	printf("emp gross salary=%f\n",e.gross);
	printf("emp net salary=%f\n",e.net);
}