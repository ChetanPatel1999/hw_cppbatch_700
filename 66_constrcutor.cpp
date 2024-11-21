#include<iostream>
using namespace std;
class number
{
    int num1;
    int num2;
    public:
    number(int a,int b)
    {
        num1=a;
        num2=b;
    }
    void display()
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
};
int main()
{
    number n1(12,34),n2(45,67);
    n1.display();
    n2.display();
    return 0;
}
