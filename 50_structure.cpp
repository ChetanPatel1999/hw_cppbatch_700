#include<iostream>
using namespace std;
struct student
{
   int rno;
   string name;
   float per;
};

int main()
{
    student s;
    s.rno=1001;
    s.name="pooja rathore";
    s.per=89.67;
    cout<<"student info :"<<endl;
    cout<<"rno : "<<s.rno<<endl;
    cout<<"name : "<<s.name<<endl;
    cout<<"per : "<<s.per<<endl;
    return 0;
}