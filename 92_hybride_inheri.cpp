// hybride inheritance with dimond problem
//  virtual base class 
#include <iostream>
using namespace std;
class A
{
public:
    void m1()
    {
        cout << "hi i am m1 base class" << endl;
    }
};
class B : virtual public A
{
public:
    void Bmethod()
    {
        cout<<"Bmethod of B class"<<endl;
    }
};
class C :virtual public A
{
public:
    void Cmethod()
    {
        cout<<"Cmethod of C class"<<endl;
    }
};
class D : public B, public C
{
 public:
 void Dmethod()
 {
      cout<<"Dmethod of D class"<<endl;
 }
};
int main()
{
    D obj;
    obj.m1();
    obj.Bmethod();
    obj.Cmethod();
    return 0;
}