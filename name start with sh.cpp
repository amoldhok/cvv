#include<stdio.h>
#include<conio.h>
#include<string.h>
struct player 
{
	int id;
	int run;
	char name[90];
};
int main()
{
	struct player p[5];
	int i;

	printf("enter player id name and run\n");
	for(i=0;i<5;i++)
	{
	scanf("%d %s %d",&p[i].id,&p[i].name,&p[i].run);
    }
    
    
    printf("display player data\n");
    for(i=0;i<5;i++)
    {
    	printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
	}
	
	
	printf("player whose name end with sh\n");
	for(i=0;i<5;i++)
	{
		if(strcmp(p[i].name+strlen(p[i].name)-2,"sh")==0)
		{
			printf("%d\t %s\t %d\n",p[i].id,p[i].name,p[i].run);
		}
	}
}
