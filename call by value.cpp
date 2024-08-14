#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	void swap(int x,int y);
		int temp;
		temp=x;
		x=y;
		y=temp;
		printf("%d%d",x,y);
		return 0;
}

void swap (int,int)
{
	int a,b;
	a=20;
	b=10;
	printf("before swappinf %d%d",a,b);
	swap(a,b);
	printf("after swapping%d%d",a,b);
}
