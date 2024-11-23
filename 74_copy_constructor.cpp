// copy constructor exampel
#include <iostream>
using namespace std;
class number
{
    int data1;
    int data2;

public:
    number() {};
    number(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    number(number &obj) // copy construtor
    {
        cout << "uesr copy constructor is called" << endl;
        data1 = obj.data1;
        data2 = obj.data2;
    }
    void display()
    {
        cout << "num1 : " << data1 << endl;
        cout << "num2 : " << data2 << endl;
    }
};
int main()
{
    number n1(12, 34);
    // number n2(n1); // user copy constrcutor is called
    number n2;
    n2 = n1; // this time default copy constrctor is called
    n1.display();
    n2.display();
    return 0;
}