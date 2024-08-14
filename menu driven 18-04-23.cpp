#include<stdio.h>
#include<conio.h>
int main()
{
	int ar,at,base,width,height,choice;
	float radias,ac,cc;

	printf("enter choice\n1)area of circle\n2)area of trangle\n3)area of reactangle\n4)area of circumferance\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
	printf("enter radias of circle\n");
	scanf("%f",&radias);
	ac=3.14*(radias*radias);
	{
		printf("area of circle is %f",ac);
	}
	break;
	
	case 2:
	printf("enter base of trangle\n");
	scanf("%d",&base);
	printf("enter height of trangle\n");
	scanf("%d",&height);
	at=(base*height)/2;
	{
	printf("area of trangle is %d",at);
    }
	break;
	
	case 3:
	 printf("enter height\n");
	scanf("%d",&height);
	printf("enter width\n");
	scanf("%d",&width);
	ar=width*height;
	{
		printf("area of reactangle is %d",ar);
	}
	break;
	
	case 4:
		printf("enter radias of circle\n");
		scanf("%f",&radias);
		cc=2*3.14*radias;
		{
			printf("area of circumferance is %f",cc);
		}
		break;
	
	}
}
