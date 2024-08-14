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
	{
		for(int i=0;i<5;i++)
		{
			printf("enter players id name and run\n");
			scanf("%d %s %d",&p[i].id,&p[i].name,&p[i].run);
		}
		printf("display all player data\n");
		for(int i=0;i<5;i++)
		{
			printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
		}
		int index,size=5;
		printf("enter index you want to delete\n");
		scanf("%d",&index);
		for(int i=index;i<5;i++)
		{
		p[i]=p[i+1];	
		}
		size--;
		printf("list of player after delete\n");
		for(int i=0;i<5;i++)
		{
			printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
		}
	}
}
