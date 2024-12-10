// abstract class example
#include <iostream>
using namespace std;
class base
{
    protected:
    int num1;
    int num2;

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    virtual void display() = 0; // pure virtual function
    virtual void m1(int a)=0; // pure virtual function
};
class derived :public base
{
    public:
    void display()
    {
       cout<<"value of num1 : "<<num1<<endl;
       cout<<"value of num2 : "<<num2<<endl;
    }
    void m1(int a)
    {

    }
    void m4()
    {
    }
};
int main()
{
    derived d1;
    d1.setdata(12,34);
    d1.display();
    return 0;
}