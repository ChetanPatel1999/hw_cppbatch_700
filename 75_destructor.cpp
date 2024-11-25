#include<iostream>
using namespace std;
class demo
{
    public:
    void display()
    {
        cout<<"hi friends i am display"<<endl;
    }
    void show()
    {
        cout<<"hi friends i am show"<<endl;
    }
    demo()//constructor
    {
        cout<<"constructor is called"<<endl;
    }
   ~ demo() // destructor
    {
      cout<<"destructor is called "<<endl;
    }
};
int main()
{
    cout<<"main fuction is start ..."<<endl;
    demo d1,d2;
    cout<<"me doing fun in main fuction"<<endl;
    d1.display();
    d1.show();

    return 0;
}