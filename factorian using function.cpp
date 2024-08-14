#include<stdio.h>
#include<conio.h>
int main()

{
	int no,z;
	printf("enter number\n");
	scanf("%d",&no);
	int fact(int);
    z=fact(no);
	printf("factorial is %d ",z);
	return 0;
}
int fact(int num)
{
	if(num>1)
	{
		return num*fact(num-1);
	}
	else
	{
		return 1;
	}
}

