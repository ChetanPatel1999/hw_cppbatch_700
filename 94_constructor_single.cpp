#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base 0 arge constructor is called" << endl;
    }
    base(int a)
    {
        cout << "base 1 arge constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "base 2 arge constructor is called" << endl;
    }
};
class derived : public base
{
    public:
    derived ():base(34,56)
    {
        cout << "derievd 0 arge constructor is called" << endl;
    }
    derived (int a)
    {
        cout << "derievd 1 arge constructor is called" << endl;
    }
    derived (int a,int b):base(a)
    {
        cout << "derievd 2 arge constructor is called" << endl;
    }
};
int main()
{
    derived obj(12);
    return 0;
}