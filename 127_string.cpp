//append method add another string in currunt object string
#include<iostream>
using namespace std;
int main()
{
    string s1="chetan";
    string s2="patel";
    s1.append(s2);
    cout<<s1<<endl;
    s1.append("ram");
    cout<<s1<<endl;
    return 0;
}