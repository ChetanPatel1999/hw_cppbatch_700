//template function
#include<iostream>
using namespace std;

template<class t>
void display(t data)
{
  cout<<"data : "<<data<<endl;
}
int main()
{
    display(12.89);
    display(67);
    display("home");
    return 0;
}