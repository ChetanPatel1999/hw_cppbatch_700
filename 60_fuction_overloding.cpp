// fuction overlodaing
//number of argumnet differen
#include <iostream>
using namespace std;
void add()
{
    cout << "sum of :" << (10) << endl;
}
void add(int a)
{
    cout << "sum of : " << (a + 10) << endl;
}
void add(int a, int b)
{
    cout << "sum of : " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum of : " << (a + b + c) << endl;
}
void add(int a, int b, int c, int d)
{
    cout << "sum of : " << (a + b + c + d) << endl;
}
int main()
{
    add(8, 5, 9, 4);
    return 0;
}