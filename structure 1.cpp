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
struct employee emp;
printf("enter employee id salary and name \n");
scanf("%d %d  %s",&emp.id,&emp.sal,&emp.name);
printf("id of employee is %d\n",emp.id);
printf("salary of empoyee is %d\n",emp.sal);
printf("name of employee is %s\n",emp.name);
return 0;
}

