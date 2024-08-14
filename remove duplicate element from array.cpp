#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,k,size;
	printf("enter element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display element\n");
		for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("duplicate element in array\n");
	for(i=0;i<10;i++)
	{
	for(j=0;j<size;j++)
	{
		if(a[i]==a[j])
		{
			for(k=j;k<size-1;k++)
			{
				a[k]=a[k+1];
			}
			size--;
			j--;
		}
	}
	}
	for(i=0;i<size;i++)
	{
		printf("a[%d]\t%d\n",i,a[i]);
	}
	return(0);
}
