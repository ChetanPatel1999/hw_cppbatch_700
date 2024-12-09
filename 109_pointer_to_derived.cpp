#include <iostream>
using namespace std;
class base
{
protected:
    int num1;

public:
    void setbase(int a)
    {
        num1 = a;
    }
    virtual void display()
    {
        cout << "num1 : " << num1 << endl;
    }
};
class derived : public base
{
    int num2;

public:
    void setderived(int a)
    {
        num2 = a;
    }
    void display()
    {
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
};
int main()
{
    base *d = new derived;
    d->setbase(12); // set base call base
    d->display();   // dipslay call derived

    cout << "___________________________________________" << endl;

    d = new base;
    d->setbase(88); // setbase call base
    d->display();   // display call base
    return 0;
}