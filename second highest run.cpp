#include<stdio.h>
#include<conio.h>
struct player
{
	int id;
	int run;
	char name[90];
};
int main()
{
	struct player p[5];
	int i,j,temp;
	printf("enter id name and run of player\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d  %s %d",&p[i].id,&p[i].name,&p[i].run);
	}
	printf("display players data\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(p[i].run>p[j].run)
			{
			 struct player	temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
	}
	printf("second highest is\n");
	printf("%d\t %s\t %d\n",p[i-2].id,p[i-2].name,p[i-2].run);
	
}
