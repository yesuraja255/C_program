#include<stdio.h>
void main()
{
	float r,area,peri;
	printf("enter the radius of the circle");
	scanf("%f",&r);
	area=3.14*r*r;
	peri=2*3.14*r;
	printf("area of the circle is:%f\n",area);
	printf("perimeter of the circle is: %f",peri);
}