// wap to print factorial of given number.
// 5  5*4*3*2*1 =120
// 4  4*3*2*1 = 24
#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "enter a num : ";
    cin >> num;     // 5
    while (num > 0) // 1
    {
        fact = fact * num; // 120
        num--;             // 0
    }
    cout << "factorial : " << fact << endl;
    return 0;
}