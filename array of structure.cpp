#include<stdio.h>
	#include<conio.h>
	struct Employee
	{  int id;
	   char name[90];
	   int sal;
	};
	
	int main()
	{ 
	struct Employee emp[5];

	  printf("\nEnter name id and salary of employee\n");
	  	  for(int i=0; i<5;i++)
	  {	
	     scanf("%s %d %d",&emp[i].name,&emp[i].id,&emp[i].sal);
	  }
	  printf("\nDisplay all employee data\n");
	  for( int i=0;i<5;i++)
	  { printf("%s\t%d\t%d\n",emp[i].name,emp[i].id,emp[i].sal);
	  }
	   getch();
	}

