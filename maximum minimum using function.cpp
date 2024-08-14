#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	void checkmax(int,int);
	void checkmin(int,int);
	checkmax(a,b);
	checkmin(a,b);
}
void checkmax(int x,int y)
{

	if(x>y)
	{
		printf("%d is maximum\n",x);
	}
	else
	{
		printf("%d is maximum\n",y);
	}
}
void checkmin(int x,int y)
{
	if(x<y)
	{
		printf("%d is minimum\n",x);
	}
	else
	{
		printf("%d is minimum\n",y);
	}
}
