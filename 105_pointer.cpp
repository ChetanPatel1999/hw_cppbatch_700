// pointer to object
// arrow opeartoer
#include<iostream>
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
    void display()
    {
        cout<<"emp info...... "<<endl;
        cout<<"id : "<<id<<endl;
        cout<<"sal : "<<sal<<endl;
    }
};
int main()
{
    emp e1,*ptr,e2,*ptr1;
    ptr=&e1;
    e1.setdata(101,5000);
    //(*ptr).display();
    ptr->display();
    ptr1=&e2;
    ptr1->setdata(102,4500);
    ptr1->display();
    (*ptr1).display();
    return 0;
}