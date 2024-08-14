#include <iostream>
using namespace std;
int main()
{
    int rno, m1, m2, m3,m4,m5,total;
    char name[10];
    float per;
    cout << "enter roll no, name,marks of 5 subject :";
    cin >> rno >> name >> m1 >> m2 >> m3>>m4>>m5;
    total = m1 + m2 + m3+m4+m5;
    per = total / 5;
    cout << "roll no= " << rno<<endl;
       cout  << "name=" << name << endl;
      cout   << "total=" << total << endl;
       cout  << "percentage=" << per<<endl;
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4>=40 && m5>=40)
    {
        if (per >= 100)
            cout << "distincting"<<endl;
        else if (per >= 90)
            cout << "grade A"<<endl;
        else if (per >= 80)
            cout << "grade B"<<endl;
        else if (per >= 70)
            cout << "Grade C"<<endl;
            else if(per>=60)
            cout<<"grade d"<<endl;
            else if(per>=50)
            cout<<"grade E"<<endl;
            else if(per>=40)
            cout<<"grade F"<<endl;
    }

    else
        cout << "fail";
    return 0;
}

