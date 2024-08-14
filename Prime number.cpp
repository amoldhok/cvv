#include<stdio.h>
#include<conio.h>
int main()
{
	int no,i,flag=1;
	printf("enter number");
	scanf("%d",&no);
	flag=1;
	printf("prime number from 1 to %d\n",no);
	while(i>no)
	{
		flag=0;
	for(i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			flag=1;
	    }
	}
}
		if(flag==1)
		{
			printf(" %d ",i);
		}
	return 0;
}


