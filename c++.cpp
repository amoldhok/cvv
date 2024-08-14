#include<iostream.h>
#include<conio.h>
class MathApp
{
   float result;
   int a,b;
   public:
       void setData(int x, int y)
       {
	   a=x;
	   b=y;
       }
       void calAdd()
       {
	  result=(float)a+b;
       }
       void calSub()
       {
	  result=(float)a-b;
       }
       void calMult()
       {
	  result=(float)a*b;
       }
       void calDiv()
       {
	    result=(float)a/b;
       }
   void display()
   {
       cout<<"\n"<<result;
   }
}
main()
{
    MathApp m1;
    int a,b,choice;
    clrscr();
	cout<<"\n ENter two numbers";
	cin>>a>>b;
    m1.setData(a,b);
    cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division";
     cout<<"\n ENter your choice";
     cin>>choice;
    switch(choice)
    {
	 case 1:
		  cout<<"\n Addition ";
		  m1.calAdd();
		  break;
	 case 2:
		     cout<<"\n Subtraction ";
		     m1.calSub();
		     break;
	 case 3:
		      cout<<"\n Multiplication ";
		      m1.calMult();
		     break;
	 case 4:
			 cout<<"\n Division ";
			 m1.calDiv();
			 break;
	 default:
		cout<<"\n Invalid";
     }
     m1.display();
    getch();
}




