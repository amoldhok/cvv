#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	
	int *ptr,i,size,sum;
	printf("enter size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	
	printf("enter value in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("display all value\n");
	for(i=0;i<size;i++)
	{
		sum=sum+ptr[i];
		printf("*ptr[%d]\t--%d\n",i,ptr[i]);
	}
	return(0);
}

