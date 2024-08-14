#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,j;
char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			{
		    	printf(" %c ",j+64);
		    	
		    	
		     }
		     //else
		     {
		     	printf(" ");
			 }
		}
		printf("\n");
	}
	return(0);
}
 A
 B   A
 C   B   A
 D   C   B   A
 E   D   C   B   A
