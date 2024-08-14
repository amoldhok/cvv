#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,temp;
	printf("enter element in array\n");
	for(i=0;i<6;i++)
	{
     scanf("%d",&a[i]);
	}
	printf("display element\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("accending order\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
}
