#include<iostream>
using namespace std;
class student
{
    int rno;
    public:
    student(int r)
    {
        rno=r;
    }
    void disprno()
    {
        cout<<"student rno : "<<rno<<endl;
    }
};
class marks:public student
{
    public:
    int hindi;
    int math;
    public:
    marks(int a,int b,int c):student(a)
    {
        hindi=b;
        math=c;
    }
    void dispmarks()
    {
        cout<<"hindi : "<<hindi<<endl;
        cout<<"math : "<<math<<endl;
    }
};
class result:public marks
{
    float per;
    public:
    result(int a,int b,int c):marks(a,b,c)
    {

    }
    void dispresult()
    {
        per=(hindi+math)/2.0;
        cout<<"peecentage : "<<per<<endl;
    }
};
int main()
{
    result s1(1234,50,35);
    s1.disprno();
    s1.dispmarks();
    s1.dispresult();
    return 0;
}