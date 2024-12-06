// how to make a normal fuction friend of nay class
// friend function access class private data member
#include <iostream>
using namespace std;
class demo
{
    int a;
    int b;

public:
    friend void display(demo obj);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};

void display(demo obj)
{
    cout << "value of a : " << obj.a << endl;
    cout << "value of b : " << obj.b << endl;
}
int main()
{
    demo obj;
    obj.setdata(12, 34);
    display(obj);
    return 0;
}