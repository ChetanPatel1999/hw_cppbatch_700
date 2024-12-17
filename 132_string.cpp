//pop_back() method delete one char from end of string
#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    cout << s1 << endl; // chetan
    s1.pop_back();      // n delete from s1
    cout << s1 << endl; // cheta
    s1.pop_back();      // a delete from s1
    cout << s1 << endl; // chet
    return 0;
}