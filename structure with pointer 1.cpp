    #include<stdio.h>
	#include<conio.h>
	struct Employee
	{  int id;
	   char name[90];
	   int sal;
	};
	struct Employee *emp;
	int main()
	{ 

	  printf("\nEnter name id and salary\n");
	  scanf("%s %d %d",&emp->name,&emp->id,&emp->sal);
	  printf("\nName is %s\n",emp->name);
	  printf("\nId is %d\n",emp->id);
	  printf("\nsalary is %d\n",emp->sal);
	  getch();
	}

