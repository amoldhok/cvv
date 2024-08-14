#include<stdio.h> 
#include<conio.h> 
int main() 
{   
int i,svalue,a[5],flag=0;

printf("enter value in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("display value from array\n");
for(i=0;i<5;i++)
{
	printf("%d\n",a[i]);
}

printf("enter search value in array\n");
scanf("%d",&svalue);
for(i=0;i,5;i++)
{
if(a[i]==svalue)
{
  flag=1;
  break;
}
if(flag)
{
	printf("value present");
}
else
{
	printf("value not found");
}
}
}


