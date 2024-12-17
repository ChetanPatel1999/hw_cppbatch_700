#include<iostream>
using namespace std;
int main()
{
    string s1="chetan";
    cout<<s1.capacity()<<endl;
    s1.shrink_to_fit();
    cout<<s1.capacity()<<endl;
    return 0;
}