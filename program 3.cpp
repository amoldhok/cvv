#include<stdio.h>
#include<conio.h>
int main()

{
int a[5],i,sum=0;
printf("enter element\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("sum of element");
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("sum is %d ",sum);
return (0);
}

