#include<iostream>
using namespace std;
template<class t>
float average(t a,t b)
{
  return (a+b)/2.0; 
}

template <class t>
t display(t data)
{
   return data;
}

template <class t1,class t2>
void display(t1 data1 ,t2 data2)
{
   cout<<"data 1 : "<<data1<<endl;
   cout<<"data 2 : "<<data2<<endl;
}
int main()
{
    cout<<"avrage : "<<average(12,11)<<endl;
    cout<<"avrage : "<<average(12.5,11.5)<<endl;
    cout<<"data : "<<display(12.5)<<endl;
    cout<<"data : "<<display("home")<<endl;
    display("home",89.67);
    display(12,89.67);
    return 0;
}