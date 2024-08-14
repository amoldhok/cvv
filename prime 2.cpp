#include<stdio.h>
#include<conio.h>
int main()
{ 
 int no,i=1,rem=0;
 printf("enter number");
 scanf("%d",&no);
 while(i<no)
 {
 if(no%i==0)
 printf("%d",i);
 i++;
}
 getch();
 }
