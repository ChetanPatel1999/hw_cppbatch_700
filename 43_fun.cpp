#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter a two number : ";
    cin >> a >> b;
    c = a + b;
    cout << "sum = " << c << endl;
}
int main()
{
   int i;
   for (i=0;i<5;i++)
   {
     add();
   }
    return 0;
}