#include<stdio.h> 
#include<conio.h> 
int main() 
{   
int a[5],i,count=0,len,svalue;
len=sizeof(a)/sizeof(a[0]);
printf("enter value in array\n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("array value\n");
for(i=0;i<len;i++)
{
	printf("%d\n",a[i]);
}


printf("enter search value\n");
scanf("%d",&svalue);
for(i=0;i<len;i++)
{
	if(a[i]==svalue)
	{
		++count;
	}
}
if(count>(len/2))
{
	printf("majority element");
}
else
{
	printf("not majority element");
}
}



