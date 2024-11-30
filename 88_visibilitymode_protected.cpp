#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    protected:
    int b;
    private :
    int c;
};
class derived :protected base
{
   public:
   void disp()
   {
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   }
};
class derived2 : protected derived
{
  void disp()
  {
    cout<<a<<endl;
    cout<<b<<endl;
  }
};
int main()
{
    base bobj;
    derived dobj;
    bobj.a=12;
    dobj.a=67;
    bobj.b=88;
    dobj.b=90;
    return 0;
}