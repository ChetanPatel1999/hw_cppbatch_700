// template example
#include <iostream>
using namespace std;
template <class T>
class data
{
    T var1;
    T var2;

public:
    void setdata(T a, T b)
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
    data<int> d1;
    d1.setdata(12, 45);
    d1.display();
    data<float> d2;
    d2.setdata(55.67, 89.99);
    d2.display();
    data<string> d3;
    d3.setdata("home", "pen");
    d3.display();
    return 0;
}