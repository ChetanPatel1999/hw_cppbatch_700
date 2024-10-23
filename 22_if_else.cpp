// wap to check voter is eleigible for casting vote or not.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age : ";
    cin >> age; // 10
    if (age >= 18)
    {
        cout << "you are eligible for casting vote";
    }
    else
    {
        cout << "you are not eligible for casting vote\n";
        cout<<"please try after "<<18-age<<" year";
    }
    return 0;
}