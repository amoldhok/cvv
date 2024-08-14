#include<stdio.h>
#include<conio.h>
struct employee
{
	int id;
	int sal;
	char name[90];
};

int main()
{
	struct employee emp[2];
	printf("enter employee data\n");
	for(int i=0;i<2;i++)
	{
		scanf("%d%d%s",&emp[i].id,&emp[i].sal,&emp[i].name);
	}
		printf("display  employee data\n");
	for(int i=0;i<2;i++)
	{
		printf("%d\t%d\t%s\n",emp[i].id,emp[i].sal,emp[i].name);
	}
}
