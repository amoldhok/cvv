#include<stdio.h>
#include<string.h>
int main() 
{
	char findMaxOccurrence(char ch[]);	
    char ch[50];
    
    printf("Enter a string:\n ");
    gets(ch);
		 
    findMaxOccurrence(ch);
}

char findMaxOccurrence(char ch[]) 
{
    int count[256]={0};  
    
    int len=strlen(ch);
    int maxCount=0;
    char maxChar;
    
    for(int i=0;i<len;i++) 
	{
        count[ch[i]]++;
        if(count[ch[i]]>maxCount) 
		{
            maxCount=count[ch[i]];
            maxChar=ch[i];
        }
    }
    printf("\nMaximum occurrence of character %c is %d\n",maxChar,maxCount);
}

