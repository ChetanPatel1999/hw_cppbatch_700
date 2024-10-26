// no return type ---- but with argument
#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "sum = " << c << endl;
}
void floatadd(float a, float b)
{
    float c;
    c = a + b;
    cout << "sum = " << c << endl;
}
void cube(int num) // 5
{
    int cb;
    cb = num * num * num;
    cout << "cube = " << cb << endl;
}
void upercase(char ch)
{
    ch = ch - 32; // a  A
    cout << "uper case : " << ch << endl;
}
int main()
{
    // add(12, 5);
    // add(3,7);
    // cube(3);
    // floatadd(12.3,5.6);
    upercase('d');
    upercase('h');
    return 0;
}