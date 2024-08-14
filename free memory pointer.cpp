#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	int main()
	{ int a[]={10,20,30,40,50};
	
	  int *ptr;
	  ptr=a;
	  ptr=ptr+2;
	  *ptr=300;
	  for(int i=1; i<=5; i++)
	  {
	    printf("%d\n",a[i]);
	    ptr++;
	  }
	  getch();
	}

