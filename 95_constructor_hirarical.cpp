#include<iostream>
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
class derived1 : public base
{
    public:
    derived1 ():base(34,56)
    {
        cout << "derievd1 0 arge constructor is called" << endl;
    }
    derived1 (int a)
    {
        cout << "derievd1 1 arge constructor is called" << endl;
    }
    derived1 (int a,int b):base(a)
    {
        cout << "derievd1 2 arge constructor is called" << endl;
    }
};
class derived2 : public base
{
    public:
    derived2 ():base(34,56)
    {
        cout << "derievd2 0 arge constructor is called" << endl;
    }
    derived2 (int a)
    {
        cout << "derievd2 1 arge constructor is called" << endl;
    }
    derived2 (int a,int b):base(a)
    {
        cout << "derievd1 2 arge constructor is called" << endl;
    }
};
int main()
{
    derived2 d2(12);
    return 0;
}