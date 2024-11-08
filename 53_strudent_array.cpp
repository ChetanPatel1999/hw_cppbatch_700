// how to make object array
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
    int n;
    cout<<"enter student count : ";
    cin>>n; //50
    student s[n];
    int i;
    for (i = 0; i < n; i++) // 2
    {
        s[i].setdata();
    }

    for (i = 0; i < n; i++)
    {
        s[i].displaymarksheet();
    }

    return 0;
}