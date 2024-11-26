#include <iostream>
using namespace std;
class A
{
public:
    void m1()
    {
        cout << "m1 method of A class is called" << endl;
    }
    void m2()
    {
        cout << "m2 method of A class is called" << endl;
    }
};
class B :public A
{
public:
    void m3()
    {
        cout << "m3 method of B class is called" << endl;
    }
    void m4()
    {
        cout << "m4 method of B class is called" << endl;
    }
};
int main()
{
    B o2;
    o2.m1();
    o2.m2();
    o2.m3();
    o2.m4();
    return 0;
}