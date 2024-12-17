// push_back();
#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    cout << s1 << endl; // chetan
    s1.push_back('u');
    cout << s1 << endl; // chetanu
    s1.push_back('m');
    cout << s1 << endl; // chetanum
    return 0;
}