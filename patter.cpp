#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a=1;
for(i=1;i<5;i++)
{
for(j=0;j<5;j++)
{
if(i>j)
{
printf(" %d ",a++);

}
else   
{
printf("  ");
}
}
printf("\n");
}
}
