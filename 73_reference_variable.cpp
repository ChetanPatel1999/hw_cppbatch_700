// reference varaible
#include <iostream>
using namespace std;
void fun(int &a)
{
    a = 45;
}
int main()
{
    int n;
    n = 78;
    cout << "n = " << n << endl;//78
    fun(n);
    cout << "n = " << n << endl;//45
    return 0;
}