#include<stdio.h>
#include<conio.h>
int main()
{
	int no;

	printf("enter number\n");
	scanf("%d",&no);
		void show(int);
	show (no);
	return 0;
}
void show(int x)
{
	for (int i=1;i<=10;i++)
	printf(" %d*%d  %d\n",x,i,x*i);
}
