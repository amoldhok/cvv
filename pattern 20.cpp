#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,j;
char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
		//	if(j<=6-i)
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

