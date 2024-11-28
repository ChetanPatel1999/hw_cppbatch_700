#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a,int b)
    {
        cout<<"sum = "<<(a+b)<<endl;
    }
    void add(float a,float b)
    {
        cout<<"sum = "<<(a+b)<<endl;
    }
    
};
class subtraction
{
    public:
    void sub(int a,int b)
    {
        cout<<"sub = "<<(a-b)<<endl;
    }
};
class multiplication
{
    public:
    void mul(int a,int b)
    {
        cout<<"mul = "<<(a*b)<<endl;
    }
};
class caluculater:public addition,public subtraction,public multiplication
{
 
};
int main()
{
    caluculater c1;
    c1.add(12,5);
    c1.sub(45,6);
    c1.mul(5,7);
    return 0;
}