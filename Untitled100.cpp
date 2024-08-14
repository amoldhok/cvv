#include<stdio.h>
#include<conio.h>
	int main()
{
int no;
int getsquare(int);
printf("enter number\n");
scanf("%d",&no);
int result=getsquare(no);
printf("square is %d",result);
}
int getsquare(int x)
{
	return x*x;
}
