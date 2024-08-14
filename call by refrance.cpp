#include<stdio.h>
#include<conio.h>
int main()
{
	void swap (int*,int*);
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d b=%d",&a,&b);
	swap(&a,&b);
	printf("after swapping a=%d b=%d",&a,&b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp =x;
	x=y;
	y=temp;
	printf("after swapping a=%d b=%d",a,b);
}
