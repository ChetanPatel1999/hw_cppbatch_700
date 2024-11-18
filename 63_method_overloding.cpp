#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "value of a : " << a << endl;
    }
    void disp(char a)
    {
        cout << "value of a : " << a << endl;
    }
    void disp(int a, int b)
    {
        cout << "value of a : " << a << endl;
        cout << "value of b : " << b << endl;
    }
    void disp(int a, int b, int c)
    {
        cout << "value of a : " << a << endl;
        cout << "value of b : " << b << endl;
        cout << "value of b : " << c << endl;
    }
    void disp(string a)
    {
        cout << "value of a : " << a << endl;
    }
};
int main()
{
    display d1;
    d1.disp("chetan");
    return 0;
}