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
			//if(j<=6-i)
			{
		    	printf(" %d ",i);
		    	
		    	
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
 1
 2   1
 3   2   1
 4   3   2   1
 5   4   3   2   1
