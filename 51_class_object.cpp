//wap to print students marksheet according to given data.
#include <iostream>
using namespace std;
class student
{
    string name; // data memeber
    int rno;
    float per;

public:
    void setdata(string s1, int a, float b) // methods/member fuction
    {
        name = s1;
        rno = a;
        per = b;
    }
    void displaymarksheet() // methods /member fuction
    {
        cout << "student marksheet : " << endl;
        cout << "name of student : " << name << endl;
        cout << "rno of student : " << rno << endl;
        cout << "per of student : " << per << endl;
        if(per>33)
        {
            cout<<"student pass "<<endl;
        }
        else{
            cout<<"student Fail "<<endl;
        }
        cout << "_____________________________________________" << endl;
    }

};
int main()
{
    student s1,s2, s3,s4;
    cout<<"size of s1 :"<<sizeof(s1)<<endl;
    s1.setdata("ram", 1001, 89.67);
    s2.setdata("rohit", 1002, 23.45);
    s3.setdata("rohan", 1003, 78.90);
    s4.setdata("chetan",1004,15.99);
    s1.displaymarksheet();
    s2.displaymarksheet();  
    s3.displaymarksheet();
    s4.displaymarksheet();
    return 0;
}