#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3],b[3],c[6],i,j,temp;
	printf("enter frist array\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter second array\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("frist array\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("second array\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",b[i]);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("dispaly frist array after sorting\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("display second array after sorting\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("merge both array after sorting\n");
	int x=0;
	for(i=0;i<3;i++)
	{
		c[i]=a[i];
		x++;
	}
	for(i=0;i<3;i++)
	{
		c[i]=b[i];
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",c[i]);
	}
return(0);
}
