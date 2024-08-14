#include<stdio.h>
#include<conio.h>
int main()
{
	int no1,no;
	printf("enter number");
	scanf("%d%d",&no,&no1);
	void add(int,int);
	add(no,no1);
	return 0;
}
void add(int a, int b)
{
	int s;
	s=a+b;
	printf("sum is %d",s);
}
