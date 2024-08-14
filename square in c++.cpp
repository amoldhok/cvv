#include<iostream>
using namespace std;
class square 
{
	int no;
	public:
		square(int x)
		{
			no=x;
		}
		int getsquare()
		{
			return no*no;
		}
};
int main()
{
	int no;
	cout<<"enter number\n";
	cin>>no;
	square s1(no);
	int result=s1.getsquare();
	cout<<"square is "<<result;

}
