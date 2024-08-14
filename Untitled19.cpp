#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter frist index\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);	
		}
	}
	
	printf("enter second index\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&b[i][j]);	
		}
	}
	// multiplication
	
	for(i=0;i<3;i++)
	{ int sum;
		for(j=0;j<3;j++)
		{
		for(int k=0;k<3;k++)
		{
			int sum=a[i][k]*a[k][j];
		}
		c[i][j]=sum;
		}
	}
		printf("display frist index\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\n",a[i][j]);	
		}
	}
		printf("display second index\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\n",b[i][j]);	
		}
	}
	
	printf("display rsultant matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",c[i][j]);
		}
	}
}
