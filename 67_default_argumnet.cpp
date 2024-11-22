//default argument in function
#include<iostream>
using namespace std;
void add(int a=10,int b=20)  // here b=20 is defalut value of b
{
    cout<<"sum = "<<(a+b)<<endl;
}
void totalbill(int quntity ,int price=100)
{
   int total;
   total=quntity*price;
   cout<<"total bill :"<<total<<endl;
}
int main()
{
    add(5,7);
    totalbill(5,20);
    totalbill(8);
    return 0;
}