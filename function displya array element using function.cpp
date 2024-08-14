#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[5],i;
	printf("enter five element in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	void showarray(int[]);
	showarray(a);
	return 0;
}
void showarray(int n[])
{
	int i,sum=0;
	printf("display array element");
	for(i=0;i<5;i++)
	{
		printf("%d",n[i]);
	}
}
