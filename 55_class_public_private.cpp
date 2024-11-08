// class data member and methods are by default private.
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    void setdata(int a,float b)
    {
       id=a;
       sal=b; 
    }
    void dispaly()
    {
        cout<<"emp info : "<<endl;
        cout<<"emp id : "<<id<<endl;
        cout<<"emp sal : "<<sal<<endl;
    }
};
int main()
{
    emp e1,e2;
    e1.setdata(1001,1200.500);
    e1.dispaly();
    e2.setdata(1002,5000);
    e2.dispaly();
    

    return 0;
}