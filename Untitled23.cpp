#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,power=1,base,index;
printf("enter base\n");
scanf("%d",&base);
printf("enter index\n");
scanf("%d",&index);
while(i<=index)
{
	power=power*base;
	i++;
}
printf("power is %d",power);
}
