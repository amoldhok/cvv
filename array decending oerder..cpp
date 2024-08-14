#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,j,temp;
printf("enter elemnet in array\n");
for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
    }
printf("display element in array\n");
for(i=0;i<5;i++)
    {
     printf("%d\n",a[i]);
     }	 
printf(" decending order\n");    
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
	for(i=0;i<5;i++)
	{
	printf(" %d\n",a[i]);
	}
return (0);
}



