#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class reverse
{
	int len,mid,*ptr;
	
public:
 reverse(int a[],int len)
	{
	ptr a;
		this->len=len;
	}
	void reverse()
	{
		mid=len/2;
		int end=(len-1);
		for(int start=0;start<min;start++)
		{
			int temp=ptr[start];
			ptr[start]=ptr[end];
			ptr[end]=temp;
			end--;
		}
		
	}
	void display()
	{
		for(int i=0;i<len;i++)
		{
			cout<<ptr[i];
		}
	}	
};

int main()
{
	int a[5],i;
	i=sizeof(a)/sizeof(a[o]);
	
	cout<<"enter value in aray";
	for(int i=0;i<1;i++)
	{
		cin>>a[i];
	}
	
	reverse r(a,1);
	cout<<"before reverse";
	r.display();
	
	r.reverse();
	
	cout<<"after reverse";
	r.display();	
}
