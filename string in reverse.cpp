#include<stdio.h>
#include<conio.h>
int main()
{
char ch[90];
int i=0,j=0;
printf("enter string\n");
gets(ch);
while(ch[j]!='\0')
{
	j++;
}	
i=j-1;
while(i>=0)
{
	printf("%c",ch[i]);
	i--;
}
}
