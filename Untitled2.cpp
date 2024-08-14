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
	struct employee emp[4];
	printf("enter employee data\n");
	for(int i=0;i<4;i++)
	{
		scanf("%d%d%s",&emp[i].id,&emp[i].sal,&emp[i].name);
	}
	
		printf("display employee data\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t%d\t%s\n",emp[i].id,emp[i].sal,emp[i].name);
	}

for(int i=0;i<4;i++)
{int temp;
	for(int j=0;j<4;j++)
	{
		if(emp[i].sal>emp[j].sal)
		{
			struct employee
	    temp=emp[i];
		emp[i]=emp[j];
		emp[j]=temp;
		}		
	}
}
	
	printf("after sorting employee data\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t%d\t%s\n",emp[i].id,emp[i].sal,emp[i].name);
	}
		
	printf("second highest data\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t%d\t%s\n",emp[i-2].id,emp[i-2].sal,emp[i-2].name);	
	}

}		

