#include<iostream>
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"good morning"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"good after noon"<<endl;
    }
};
class dereived:public base1,public base2
{
  public:
  void greet()
  {
    base1::greet();
    base2::greet();
  }
};
int main()
{
    dereived d;
    d.greet();
    return 0;
}