// example of reference variable
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;        // b is a reference variable
    cout << a << endl; // 12
    cout << b << endl; // 12
    b = 34;
    cout << a << endl; // 34
    cout << b << endl; // 34
    a = 90;
    cout << a << endl; // 90
    cout << b << endl; // 90
    return 0;
}