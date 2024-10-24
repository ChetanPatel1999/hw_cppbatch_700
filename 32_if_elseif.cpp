//wap to find greatest number between there number.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter three number : ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"greatest num : "<<num1;
    }
    else if(num2>num3)
    {
         cout<<"greatest num : "<<num2;
    }
    else{
         cout<<"greatest num : "<<num3;
    }
    return 0;
}