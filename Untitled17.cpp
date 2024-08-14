#include<stdio.h>
#include<conio.h>
int main()
{
	int i,no,sum=0,rem;
	printf("enter three digit number\n");
	scanf("%d",&no);
	while(no!=0)
	{
		sum=sum+no;
		rem=no%10;
	}

printf("sum is %d",sum);
}


