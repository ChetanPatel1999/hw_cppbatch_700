// template function
// if we have orginal fuction defination so frist priority is given 
// original function.
#include <iostream>
using namespace std;

template <class t>
void display(t data)
{
    cout << "data : " << data << endl;
}

void display(int data)
{
    cout << "orginal function data : " << data << endl;
}
int main()
{
    display(12.89);
    display(67);
    display("home");
    return 0;
}