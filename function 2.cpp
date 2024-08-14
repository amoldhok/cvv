#include<stdio.h>
#include<conio.h>
int main()
{
	void add();
	printf("welcome to program\n");
	add();
	add();
	getch();
} 
void add()
{
	int a,b,c;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d",c);
}

