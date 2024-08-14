#include<stdio.h>
#include<conio.h>
int main()
{
float x;
	float area();
	x=area();
	printf("area of corcle is %2f",x);
	return 0;
}
float area()
{
	float a,p=3.14;
	int r;
	printf("enter radias");
	scanf("%d",&r);
	a=p*r*r;
	return a;
}
