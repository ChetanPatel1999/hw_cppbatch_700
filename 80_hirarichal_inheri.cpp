// example of hirarichal inheritance
#include <iostream>
using namespace std;
class student
{
    int rno;
    string name;

public:
    student(int a, string s)
    {
        rno = a;
        name = s;
    }
    void displaydata()
    {
        cout << "rno of student : " << rno << endl;
        cout << "name of student : " << name << endl;
    }
};
class mathstd : public student
{
    int math;
    int physics;
    int chemestry;

public:
    mathstd(int r, string s, int a, int b, int c) : student(r, s)
    {
        math = a;
        physics = b;
        chemestry = c;
    }
    void displaymarks()
    {
        cout << "Math marks : " << math << endl;
        cout << "physics marks : " << physics << endl;
        cout << "Chemestry marks : " << chemestry << endl;
        cout << "_________________________________________________" << endl;
    }
};
class comstd : public student
{
    int bussiness;
    int account;
    int ip;

public:
    comstd(int r, string s,int a, int b, int c):student(r,s)
    {
        bussiness = a;
        account = b;
        ip = c;
    }
    void displaymarks()
    {
        cout << "bussiness marks : " << bussiness << endl;
        cout << "account marks : " << account << endl;
        cout << "ip marks : " << ip << endl;
        cout << "_________________________________________________" << endl;
    }
};
int main()
{
    mathstd s1(1001, "ram", 50, 89, 47);
    s1.displaydata();
    s1.displaymarks();

    comstd s3(1001, "shyam",56, 78, 99);
    s3.displaydata();
    s3.displaymarks();
    return 0;
}