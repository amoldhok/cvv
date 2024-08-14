#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,j;
char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=6-i)
			{
		    	printf(" %d ",j);
		    	
		    	
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
 1   2   3   4   5
 1   2   3   4
 1   2   3
 1   2
 1
