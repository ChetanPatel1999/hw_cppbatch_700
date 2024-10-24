#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a num : ";
    cin>>num;
    switch (num)
    {
        case 1: cout<<"ONE"; break;
        case 2: cout<<"TWO"; break;
        case 3: cout<<"THREE"; break;
        default : cout<<"please enter 1 2 3";break;
    }
    return 0;
}