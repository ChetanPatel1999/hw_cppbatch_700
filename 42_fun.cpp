//fuction simple example 
#include<iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout<<"enter a two number : ";
    cin>>a>>b;
    c=a+b;
    cout<<"sum = "<<c<<endl;
}
int main()
{
    cout<<"main fuction start ..."<<endl;
    add();
    cout<<"main fuction end... "<<endl;
    return 0;
}