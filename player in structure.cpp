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
	struct player p[2];
	printf("enter player name id and run\n");
	for(int i=0;i<2;i++)
	{
	scanf("%s %d %d",&p[i].name,&p[i].id,&p[i].run);
    }
	printf("display players detail\n");
	for(int i=0;i<2;i++)
	{
	printf("name is %s\t",p[i].name);
	printf("id is %d\t",p[i].id);
	printf("run is %d\n",p[i].run);
    }
	
}
