  #include<stdio.h>
  
  int s=0;
  int *z;
  

 void sum (int x[]) // function 5
{
	  int i=0;
	   while(i<5)
	   {
	   	   i++;
	   }
	  z=x;
	}
int main(){
     int a[5],*p;
     for(int i=0;i<5;i++)
     {
     	scanf("%d",&a[i]);
	 }
	sum(a);
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(z+i));
	}
}

