#include <iostream>
using namespace std;
class number
{
    int data1;
    int data2;

public:
    number(int a=56 , int b = 89) // defaul constructor
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "num1 : " << data1 << endl;
        cout << "num2 : " << data2 << endl;
    }
};
int main()
{
    number n1, n2(45, 78);
    n1.display();
    n2.display();
    return 0;
}