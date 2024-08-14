#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,size,sum=15,*ptr;
	printf("enter size\n ");
	{
	scanf("%d",&size);
    }
    ptr=(int*)malloc(sizeof(int)*size);
	printf("enter element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(sum==ptr[i]+ptr[j])
			{
				printf("%d--%d %d%d\n",i,j,ptr[i],ptr[j]);
			}
		}
	}
	return 0;
}

