#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "0 args constructor" << endl;
    }
    demo(int a)
    {
        cout << "1 args constructor" << endl;
    }
    demo(int a, int b)
    {
        cout << "2 args constructor" << endl;
    }
    demo(int a, int b, int c)
    {
        cout << "3 args constructor" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1 , d2(56), d3(12,34);
    d1.display();
    return 0;
}