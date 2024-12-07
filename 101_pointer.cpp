// pointer in cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    cout << "value of a : " << a << endl;
    cout << "address  of a : " << &a << endl;
    cout << "address  of a by ptr: " << ptr << endl;
    cout << "value  of a by ptr: " << (*ptr) << endl;
    *ptr = 90;
    cout << "value of a : " << a << endl;
    return 0;
}