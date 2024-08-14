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
		    	printf(" %d ",i);
		    	
		    	
		     }
		     else
		     {
		     	printf(" ");
			 }
		}
		printf("\n");
	}
	return(0);
}
//11111
//2222
//333
//44
//5
