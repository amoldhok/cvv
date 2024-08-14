#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int base,index,i=1,p=1;
	printf("enter base\n");
	scanf("%d",&base);

	printf("enter index\n");
	scanf("%d",&index);
	void show(int,int,int,int);
	show(base,index,p,i);

}
void show(int base,int index,int p,int i)
{
if(i<=index)
{
	p=p*base;
	i++;
	show(base,index,p,i);
	}
	else
	{
		printf("%d",p);
		}	
}








	
	
	
