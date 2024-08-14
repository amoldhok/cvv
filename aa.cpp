#include<iostream>
using namespace std;
class value
{ protected:
	int no;
	public:
		int setvalue(int x)
		{
			no=x;
		}
};
class square:public value
{
	public:
		int getsquare()
		{
			return no*no;
		}
};
int main()
{
	square s;
	int no;
	cout<<"enter number\n";
	cin>>no;
	s.setvalue(no);
	int result=s.getsquare();
	cout<<"square is\n"<<result;
}
