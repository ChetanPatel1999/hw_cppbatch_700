// fuction with return type ---- with argument
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int res=add(12,5);
    cout<<"sum : "<<res<<endl;
    cout<<"sum : "<<add(4,7)<<endl;
    return 0;
}