#include<stdio.h>
#include<conio.h>
int main()
{
//	int n=10;
	void show(int);
	show (1);
	return 0;
}
void show(int x)
{
	printf("%d\n",x);
	if(x>0)
	{
		x++;
	show(x);
}
}
