#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void setdata(string s1, int a, float b)
    {
        name = s1;
        rno = a;
        per = b;
    }
    void display()
    {
        cout << "info of student : " << endl;
        cout << "name of student : " << name << endl;
        cout << "rno of student : " << rno << endl;
        cout << "per of student : " << per << endl;
        cout<<"_____________________________________________"<<endl;
    }
};
int main()
{
    student s1, s2, s3,s4;
    s1.setdata("ram", 1001, 89.67);
    s2.setdata("rohit", 1002, 67.45);
    s3.setdata("rohan", 1003, 78.90);
    s4.setdata("golu",1004,34.66);
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}