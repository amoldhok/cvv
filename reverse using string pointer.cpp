#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[90];
	char *ptr;
	int start,mid,len,end,temp;
	printf("enter string\n");
	gets(ch);
	len=strlen(ch);
	mid=len/2;
	end=len-1;
	ptr=ch;
	int count=0;
	while(*ptr!='\0')
	{
		for(start=0;start<mid;start++)
		{
			temp=*ptr[start];
			*ptr[start]=*ptr[end];
			*ptr[end]=temp;
			*ptr[end]--;
		}
		printf("after reverse %s",ptr);
	}
	
}
