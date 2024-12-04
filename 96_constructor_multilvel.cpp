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
    derived() : base(34, 56)
    {
        cout << "derievd 0 arge constructor is called" << endl;
    }
    derived(int a)
    {
        cout << "derievd 1 arge constructor is called" << endl;
    }
    derived(int a, int b) : base(a)
    {
        cout << "derievd 2 arge constructor is called" << endl;
    }
};
class derived1 : public derived
{
public:
    derived1() : derived(34, 56)
    {
        cout << "derievd1 0 arge constructor is called" << endl;
    }
    derived1(int a)
    {
        cout << "derievd1 1 arge constructor is called" << endl;
    }
    derived1(int a, int b) : derived(a)
    {
        cout << "derievd1 2 arge constructor is called" << endl;
    }
};
int main()
{
    derived1 obj(34,67);
    return 0;
}