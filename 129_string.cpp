//getline() :-its used to get sentance from user
#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"enter a string : ";
    getline(cin,s1);
    cout<<"string : "<<s1<<endl;
    return 0;
}