#include<stdio.h>
#include<conio.h>
int main()

{
	int no,choice,year,a,b,c;
	char ch;	
	printf("enter choice:\n 1)check number is positive negative,or zero\n2)check number is even or odd\n3)check character alfabet digit or special symbol\n4)check maximum number between three number\n5)check year is leap or not\n");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
			printf("enter number\n");
	scanf("%d",&no);

	if(no>0)
	{
		printf("positive number");
	}
	if(no<0)
	{
		printf("negative number");
	}
	if(no==0)
	{
		printf("zero");
	}
	break;
	

	case 2:
		printf("enter number\n");
	scanf("%d",&no);
	 if(no%2==0)
	{
		printf("even number");
	}
	else 
	{
		printf("odd number");
	}
	break;
	case 3:
		printf("enter character\n");
	scanf("%d",&ch);
	 if(ch>=65 && ch<=90 || ch>=97 && ch<=122 )
	{
	printf("alfabet");
    }
    else if(ch>=48 && ch<=57)
    {
    	printf("digit");
	}
	else
	{
		printf("special symbol");
	}
	break;
	case 4:
	printf("enter three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("A is greate");
	} 
	else if(b>a && b>c)
	{
		printf("B is greater");
	}
	else 
	{
		printf("C is greater");
	}
	break;
	case 5: printf("enter year\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	break;
	default : printf("invalid input");
	break;
}
}
