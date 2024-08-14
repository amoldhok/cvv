#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	void evenodd(int);
	evenodd(no);
}
void evenodd(int a)
{
	if(a%2==0)
	{
		printf("%d is even number",a);
	}
	else
	{
		printf("%d is odd number",a);
	}
}
