// wap to print students marksheet according to given data.
#include <iostream>
using namespace std;
class student
{
    string name; // data memeber
    int rno;
    float per;
    static int totalpass;
    static int totalfail;
    static string classteacher;

public:
    void setdata(string s1, int a, float b) // methods/member fuction
    {
        name = s1;
        rno = a;
        per = b;
    }
    void displaymarksheet() // methods /member fuction
    {
        cout << "student marksheet ........................... " << endl;
        cout<<"class teacher name : "<<classteacher<<endl;
        cout << "name of student : " << name << endl;
        cout << "rno of student : " << rno << endl;
        cout << "per of student : " << per << endl;
        if (per > 33)
        {
            cout << "student pass " << endl;
            totalpass++;
        }
        else
        {
            cout << "student Fail " << endl;
            totalfail++;
        }
        cout << "_____________________________________________" << endl;
    }
    void totalresult()
    {
        cout << "total result ....." << endl;
        cout << "total pass : " << totalpass << endl;
        cout << "total Fail : " << totalfail << endl;
        cout << "_____________________________________________" << endl;
    }
};
int student::totalpass = 0;
int student::totalfail = 0;
string student::classteacher="dr. sandeep meshra";
int main()
{
    student s1, s2, s3, s4;
    s1.setdata("ram", 1001, 13.67);
    s2.setdata("rohit", 1002,15.45);
    s3.setdata("rohan", 1003, 78.90);
    s4.setdata("kuber", 1004, 80.90);
    s1.displaymarksheet();
    s2.displaymarksheet();
    s3.displaymarksheet();
    s4.displaymarksheet();
    s1.totalresult();
    return 0;
}