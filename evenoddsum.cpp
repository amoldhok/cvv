#include<stdio.h>
#include<conio.h>

int main()
{
	int no;
	printf("enter number\n");
	scanf("%d",&no);
	int evenodd(int);
	evenodd(no);
	return 0;
}
int evenodd(int num)
{ 
 int i=1,esum=0,osum=0;
while(i<=num)
{
if(i%2==0)
{
	esum=esum+i;
}
else if(i%1==0)
{
	osum=osum+i;
}
i++;
}
printf("sum of even number is     %d\t",esum);
printf("sum of odd number is    %d\n",osum);
}
