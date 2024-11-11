// how to given fuction defination outside class.
//  wap to print students marksheet according to given data.
#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void setdata(string, int, float); // decalaration
    void displaymarksheet();          // decalaartion
};
void student::setdata(string s1, int a, float b) // (::)=>scope resolution operator
{
    name = s1;
    rno = a;
    per = b;
}
void student::displaymarksheet()
{
    cout << "student marksheet : " << endl;
    cout << "name of student : " << name << endl;
    cout << "rno of student : " << rno << endl;
    cout << "per of student : " << per << endl;
    if (per > 33)
    {
        cout << "student pass " << endl;
    }
    else
    {
        cout << "student Fail " << endl;
    }
    cout << "_____________________________________________" << endl;
}
int main()
{
    student s1, s2;
    s1.setdata("chetan", 1001, 56.78);
    s1.displaymarksheet();
    s2.setdata("rohit",1002,67.89);
    s2.displaymarksheet();
    return 0;
}