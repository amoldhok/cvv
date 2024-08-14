#include<stdio.h>
#include<conio.h>
int main()
{
float radias;
printf("enter radias\n");
scanf("%f",&radias);

void circle(float);
circle(radias);
	
}
void circle(float radias)
{
float dia,cir,area;
dia=radias*radias;
printf("diameter of circle is %f\n",dia);
area=3.14*radias*radias;
printf("area of circle is %f\n",area);
cir=2*3.14*radias;
printf("area of circumferance is %f\n",cir);
}
