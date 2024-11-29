#include<iostream>
using namespace std;
class student
{
    int rno;
    public:
    void setrno(int r)
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
    protected:
    int hindi;
    int math;
    public:
    int get_hindi_marks()
    {
        return hindi;
    }
    int get_math_marks()
    {
        return math;
    }
    void setmarks(int a,int b)
    {
        hindi=a;
        math=b;
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
    void dispresult()
    {
        per=(hindi+math)/2.0;
        cout<<"peecentage : "<<per<<endl;
    }
};
int main()
{
    result s1,s2;
    s1.setrno(1234);
    s1.setmarks(50,35);
    s1.disprno();
    s1.dispmarks();
    s1.dispresult();
    return 0;
}