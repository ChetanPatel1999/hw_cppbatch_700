// friend class
#include <iostream>
using namespace std;
class demo;
class other
{
public:
    void displaya(demo obj);
    void displayb(demo obj);
};
class demo
{
    int a;
    int b;

public:
    friend class other;
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};
void other::displaya(demo obj)
{
    cout << "value of a : " << obj.a << endl;
}
void other::displayb(demo obj)
{
    cout << "value of a : " << obj.b << endl;
}
int main()
{
    demo obj;
    obj.setdata(12, 34);
    other ob;
    ob.displaya(obj);
    ob.displayb(obj);
    return 0;
}