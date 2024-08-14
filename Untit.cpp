#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3][3],sum=0,lsum=0,rsum=0;
	
	printf("enter value in array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("display value\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			if(i==j)
			{
				lsum=lsum+a[i][j];
			}
			if(j=2-i)
			{
				rsum=rsum+a[i][j];
			}
		}
			printf("\n");		
	}
	printf("sum of left digonal is %d",lsum);
	printf("sum of right digonal is %d",rsum);
	
	}
