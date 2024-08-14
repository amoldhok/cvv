
#include<iostream>

 class searchrepetativeelement 
 {
 	int a[5],sval,i,j;
 	public:
 		searchrepetativeelement(int a[],sval)
 		{
 			this->a[i]=a[i];
 			this->sval=sval;
		 }
		 int findrepetative()
		 {
		 	int flag=0,count=0;
		 	for(i=0;i<5;i++)
		 	{
		 		for(j=i+1;j<5;j++)
		 		
		 		if(a[i]==sval)
		 		{
		 			++count;
		 			flag=0;
		 			break;
				 }
				 else
				 {
				 	flag=0;
				 }
			 }
		 }
		 void display()
		 
 };
 main()
 int a[5],value,i;
 cout<<"enter value in array\n";
 for(i=0;i<5;i++)
 {
 	cin>>a[i];
 }
 cout<<"enter value for search\n";
 cin>>value;
 searchrepetativeelement e;
 int result=e.searchrepetativeelement(a);
 if(result!=1)
 {
 	cout<<"number";
 }

