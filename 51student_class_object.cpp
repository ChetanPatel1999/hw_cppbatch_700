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
    student(string s1, int a, float b) // methods/member fuction
    {
        name = s1;
        rno = a;
        per = b;
    }
    void displaymarksheet() // methods /member fuction
    {
        cout << "student marksheet ........................... " << endl;
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
    static void totalresult()
    {
        cout << "total result ....." << endl;
        cout << "total pass : " << totalpass << endl;
        cout << "total Fail : " << totalfail << endl;
        cout << "_____________________________________________" << endl;
    }
    static void disp_class_teachername()
    {
        cout << "class teachar name : " << classteacher << endl;
        cout << "__________________________________________________" << endl;
    }
    static void average(student obj1, student obj2) // obj  s2
    {
        float ave = (obj1.per + obj2.per) / 2.0;
        cout << "avrage of " << obj1.name << " and " << obj2.name << " = " << ave << endl;
        cout << "__________________________________________________________" << endl;
    }
    static void average(student obj1, student obj2, student obj3) // obj  s2
    {
        float ave = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << "avrage of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << ave << endl;
        cout << "__________________________________________________________" << endl;
    }
    static void average(student obj1, student obj2, student obj3, student obj4) // obj  s2
    {
        float ave = (obj1.per + obj2.per + obj3.per + obj4.per) / 4.0;
        cout << "avrage of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " and " << obj4.name << " = " << ave << endl;
        cout << "__________________________________________________________" << endl;
    }
};
int student::totalpass = 0;
int student::totalfail = 0;
string student::classteacher = "dr. sandeep meshra";
int main()
{
    student::disp_class_teachername();
    student s1("ram", 1001, 70.67);
    student s2("rohit", 1002, 15.45);
    student s3("rohan", 1003, 78.90);
    student s4("kuber", 1004, 80.90);
    s1.displaymarksheet();
    s2.displaymarksheet();
    s3.displaymarksheet();
    s4.displaymarksheet();
    student::totalresult();
    student::average(s1, s2);
    student::average(s2, s3);
    student::average(s1, s2, s3);
    student::average(s1, s2, s3, s4);

    return 0;
}