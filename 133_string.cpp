#include<iostream>
using namespace std;
int main()
{
    string s1="chetan";
    cout<<s1<<endl;//chetan
    s1.clear();// delete data of string
    cout<<s1<<endl;//
    s1.push_back('A');
    cout<<s1<<endl;//
    return 0;
}