// template with default  parameter
#include <iostream>
using namespace std;
template <class t1=int,class t2=int>
class data
{
    t1 var1;
    t2 var2;

public:
    void setdata(t1 a, t2 b)
    {
        var1 = a;
        var2 = b;
    }
    void display()
    {
        cout << "var1 : " << var1 << endl;
        cout << "var2 : " << var2 << endl;
        cout << "_________________________" << endl;
    }
};
int main()
{
    data<> d1;
    d1.setdata(12, 56);
    d1.display();
    data<float,char> d2;
    d2.setdata(89.99,'A');
    d2.display();
    data<string> d3;
    d3.setdata("home", 78);
    d3.display();
    return 0;
}