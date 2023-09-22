#include<stdio.h>
struct student
{
	int sid;
	char sname[30];
	float m,p,c,t,avg;
};
void main()
{
	struct student s;
	printf("enter student id:");
	scanf("%d",&s.sid);
	fflush(stdin);
	printf("enter student name:");
	gets(s.sname);
	printf("enter maths marks:");
	scanf("%f",&s.m);
	printf("enter physics marks:");
	scanf("%f",&s.p);
	printf("enter chemestry marks:");
	scanf("%f",&s.c);
	s.t=s.m+s.p+s.c;
	s.avg=s.t/3;
	printf("student name:%s\n",s.sname);
	printf("student total marks:%f\n",s.t);
	printf("student avg marks:%f\n",s.avg);
	if(s.m<35||s.p<35||s.c<35)
		printf("grade:fail");
	else if (s.avg>95)
		printf("grade:a+");
	else if (s.avg>90)
		printf("grade:a");
	else if (s.avg>80)
		printf("garde:b+");
	else if (s.avg>75)
		printf("grade:b");
	else if (s.avg>60)
		printf("garde:c");	
}