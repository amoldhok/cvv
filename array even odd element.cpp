#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[5],i,value,index;
printf("enter the value of array\n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("enter index");
scanf("%d",&index);
printf("enter value");
scanf("%d",&value);

for(i=5;i>=index;i--)
{
//	a[i+1]=a[i];
	a[index]=value;
}
	printf("display element\n");
	for(i=0;i<5;i++)
	{
printf("%d\t",a[i]);
}

return 0;
}

