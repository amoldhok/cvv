#include<stdio.h>
#include<conio.h>
int main()
{
	int no,frist,last;
	printf("enter four digit number\n");
	scanf("%d",&no);
	
	printf("before swapping number %d",no);
	
	last=no%10;
	no=no/10;
	
	frist=no/100;
	no=no%100;
	
	last=last*1000;
	no=no*10;
	
	no=last+no+frist;
	printf("after swapping %d",no);
	return 1;
}


