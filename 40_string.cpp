#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "enter your name :";
    getline(cin, name); // take a sentance from user
    cout << "my name is : " << name;
    return 0;
}