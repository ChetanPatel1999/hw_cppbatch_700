#include <iostream>
using namespace std;
class base
{
public:
    int a;
    int b;
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};
class other_class
{
public:
    void fun()
    {
        base ob;
        ob.setdata(78, 90);
        cout << ob.a << endl;
        cout << ob.b << endl;
    }
};
int main()
{
    derived obj;
    obj.a = 45;
    obj.setdata(12, 34);
    obj.display();
    other_class other;
    other.fun();
    return 0;
}