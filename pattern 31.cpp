#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,j;
char ch='A';
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			{
				if(i>=j)
				{	
		    	printf(" * ");
		       }
		     else
		     {
		     	printf(" ");
			 }
		}
	}
		printf("\n");
}
	return(0);
}
