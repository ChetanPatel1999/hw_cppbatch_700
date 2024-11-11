// wap to print students marksheet according to given data.
#include <iostream>
using namespace std;
class student
{
    string name; // data memeber
    int rno;
    float per;

public:
    void setdata() // methods/member fuction
    {
        cout << "enter student name : ";
        cin >> name;
        cout << "enter student rno : ";
        cin >> rno;
        cout << "enter student per : ";
        cin >> per;
    }
    void displaymarksheet() // methods /member fuction
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
};
int main()
{
    student s1, s2;
    s1.setdata();
    s1.displaymarksheet();
    return 0;
}