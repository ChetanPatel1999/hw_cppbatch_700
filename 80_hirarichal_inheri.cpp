//example of hirarichal inheritance
#include <iostream>
using namespace std;
class student
{
    int rno;
    string name;

public:
    void setdata(int a, string s)
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
    void setmarks(int a, int b, int c)
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
        cout<<"_________________________________________________"<<endl;
    }
};
class comstd :public student
{
    int bussiness;
    int account;
    int ip;

public:
    void setmarks(int a, int b, int c)
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
        cout<<"_________________________________________________"<<endl;
    }
};
int main()
{
    mathstd s1, s2;
    s1.setdata(1001, "ram");
    s1.setmarks(50, 89, 47);
    s1.displaydata();
    s1.displaymarks();

    comstd s3,s4;
    s3.setdata(1001,"shyam");
    s3.setmarks(67,88,90);
    s3.displaydata();
    s3.displaymarks();
    return 0;
}