#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "base1 0 arge constructor is called" << endl;
    }
    base1(int a)
    {
        cout << "base1 1 arge constructor is called" << endl;
    }
    base1(int a, int b)
    {
        cout << "base1 2 arge constructor is called" << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "base2 0 arge constructor is called" << endl;
    }
    base2(int a)
    {
        cout << "base2 1 arge constructor is called" << endl;
    }
    base2(int a, int b)
    {
        cout << "base2 2 arge constructor is called" << endl;
    }
};
class derived : public base1,public base2
{
    public:
    derived ():base1(34,56),base2(12)
    {
        cout << "derievd 0 arge constructor is called" << endl;
    }
    derived (int a):base2(34,56)
    {
        cout << "derievd 1 arge constructor is called" << endl;
    }
    derived (int a,int b):base1(a)
    {
        cout << "derievd 2 arge constructor is called" << endl;
    }
};
int main()
{
    derived obj(12,89);
    return 0;
}