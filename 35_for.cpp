//wap to print table of given number.
#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter a num : ";
    cin>>num;//5
    for(i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
    }

    return 0;
}