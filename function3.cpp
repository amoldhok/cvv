#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n;
	printf("enter number");
	scanf("%d",&n);
	void findsquare(int);
	findsquare(n);
	return 0;
}
void findsquare(int num)
{
	int s;
	s=num*num;
	printf("square  is %d",s);
}
