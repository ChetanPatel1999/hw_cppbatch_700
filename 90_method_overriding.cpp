#include <iostream>
using namespace std;
class base
{
public:
    void disp()
    {
        cout << "hi i am base disp" << endl;
    }
};
class derived : public base
{
public:
    void disp() // method overrid of base class
    {
        cout << "hi i am derived disp" << endl;
    }
};
int main()
{
    derived obj;
    obj.disp();
    return 0;
}