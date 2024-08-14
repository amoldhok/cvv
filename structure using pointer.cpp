#include<stdio.h>
#include<conio.h>
int main()
{
struct employee
{
	int id;
   long	int sal;
	char name[90];
};

	struct employee *emp;
	printf("enter employee name id and salary\n");
	scanf("%s %d %ld",&emp->name,&emp->id,&emp->sal);
	printf("name of employee is %s\n",emp->name);
	printf("id of employee is %d\n",emp->id);
	printf("sal of employee is %ld\n",emp->sal);
	return 0;
	
}
