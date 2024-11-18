// data type sequence change
#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "sum of : " << (a + b) << endl;
}
void add(double a,double b)
{
    cout << "sum of : " << (a + b) << endl;
}
void add(double a,int b)
{
     cout << "sum of : " << (a + b) << endl;
}
void add(int a,double b)
{
     cout << "sum of : " << (a + b) << endl;
}
int main()
{
    add(8.3, 5);
    add(6,9.3);
    return 0;
}