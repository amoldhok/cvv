#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[90];
	int len=0;
	printf("enter string\n");
	gets(ch);
	printf("before reverse string\n%s\n",ch);
	 strrev(ch);
	printf("after reverse\n %s",ch);
	return 0;
}
