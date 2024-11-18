// data tyep of argument different 
#include<iostream>
using namespace std;
void display(int a)
{
  cout<<"value of a :" <<a<<endl;
}
void display(char a)
{
  cout<<"value of a :" <<a<<endl;
}
void display(string a)
{
  cout<<"value of a :" <<a<<endl;
}
void display(double a)
{
  cout<<"value of a :" <<a<<endl;
}

int main()
{
    display("chetan");
    display(12);
    display('T');
    display(56.78);
    return 0;
}