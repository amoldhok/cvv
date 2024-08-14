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
	  for(int i=0;i<5;i++)
	  { printf("%s\t%d\t%d\n",emp[i].name,emp[i].id,emp[i].sal);
	  }
	  //sorting logic
	  for(int i=0;i<5;i++)
	  {
	     for(int j=i+1;j<5;j++)
	     {
		 if(emp[i].sal>emp[j].sal)
		 {
		    struct Employee
		    temp=emp[i];
		    emp[i]=emp[j];
		    emp[j]=temp;
		 }
	     }
	  }
	  printf("\nDisplay all employee after sorting\n");
	  for(int i=0; i<5;i++)
	  { printf("%s\t%d\t%d\n",emp[i].name,emp[i].id,emp[i].sal);
	  }

	   getch();
	}

