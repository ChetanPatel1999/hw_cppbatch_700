#include <iostream>
using namespace std;
class number
{
    int data1;
    int data2;

public:
    number( ) // non parameterised costructor //default constructor
    {
        data1 = 90;
        data2 = 80;
    }
    number(int a,int b) // parameterised constructor
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout << "num1 : " << data1 << endl;
        cout << "num2 : " << data2 << endl;
    }
};
int main()
{
    number n1, n2(55,66);
    n1.display();
    n2.display();
    return 0;
}