// no return type ---- no argument
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
void cube()
{
    int num,cb;
    cout<<"enter a num : ";
    cin>>num;
    cb=num*num*num;
    cout<<"cube = "<<cb<<endl;
}
void upercase()
{
    char ch ;
    cout<<"enter a char : ";
    cin>>ch;
    ch=ch-32;     // a  A
    cout<<"uper case : "<<ch<<endl;
}
int main()
{
    //cube();
    upercase();
    return 0;
}