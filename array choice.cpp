#include<stdio.h>
#include<conio.h>
int main()
{

int a[6],i,k,choice,index,value,flag=0,size;
printf("enter choice:\n1)display all element\n2)insert element at specific index\n3)insert element at start\n4)insert element at the end\n5)delete element at specific index\n6)delete element at the start\n7)delete element at the end\n8)search specific element by value\n9)search specific element by index\n");
scanf("%d",&choice);
printf("enter element\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
switch(choice)
{
case 1:printf("display element\n");
	for(i=0;i<6;i++)
       {
	printf("%d\n",a[i]);
       }
       break;
case 2:printf("enter index & value\n");
       scanf("%d %d",&index,&value);
       for(i=4;i>=index;i--)
       {
       printf("%d",a[i]);
       }
       a[index]=value;
       printf("display element\n");
       for(i=0;i<6;i++)
       { printf("a[%d] %d\n",i,a[i]);
       }
       break;
 case 3: printf("enter value at start\n");
	  scanf("%d",&value);
	  a[0]=value;
	  printf("display element\n");
	  for(i=0;i<6;i++)
	  {
	  printf("a[%d]\t %d\n",i,a[i]);
	  }
	 break;
 case 4: printf("insert value at end\n");
	  scanf("%d",&value);
	  a[5]=value;
	  printf("display element\n");
	  for(i=0;i<6;i++)
	  {
	  printf("a[%d]\t%d\n",i,a[i]);
	  }
	  break;
 case 5:printf("delete value at specific index\n");
	scanf("%d\n",&value);
	for(i=0;i<6;i++)
	{
	if(a[i]==value)
	{
	size--;
	flag=1;
	for(k=1;k<5;k++)
	{
	a[k]=a[k+1];
	}
	i=i-1;
	}
	}
	if(flag==0)
	printf("%d\n is not available");
	for(i=0;i<6;i++)
	{
	 printf("after delete a[%d]\t %d\n",i,a[i]);
	}
	break;
case 6:printf("delete element at start\n");
        scanf("%d",&value);
		a[0]=value;
		printf("display element\n");
		for(i=0;i<6;i++)
		   {
			printf("a[%d]\t--%d\n",i,a[i]);
			}
			break;	
	
 case 9:printf("enter serach value\n");
	scanf("%d",&value);
	for(i=0;i<6;i++)
	{
	if(a[i]==value)
	{
	flag=1;
	break;
	}
	}
	if(flag)
	{
	printf("value found");
	}
	else
	{
	printf("not found");
	 }
	 break;
}
return(0);
}

