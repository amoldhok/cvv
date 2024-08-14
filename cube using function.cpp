#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	void findcube(int);
	findcube(no);
}
void findcube(int b)
{
	int c;
	c=b*b*b;
	printf("cube is %d",c);
}
