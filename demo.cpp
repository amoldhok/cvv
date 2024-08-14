#include<stdio.h>
#include<conio.h>
int main()
{
int no,table,i=1;
printf("enter number\n");
scanf("%d",&no);
while(i<=10)
{
	table=i*no;
	printf("table is %d x %d=%d",i,no,table);
	i++;
}
}


