// fuction with return type ---- with argument
#include<iostream>
using namespace std;
int sumrange(int s,int e)
{
    int i,sum=0;
    for(i=s;i<=e;i++)
    {
        sum=sum+i;//
    }
    return sum;
}
int main()
{
    cout<<"sum of 1 to 10 : "<<sumrange(1,10)<<endl;
    cout<<"sum of 10 to 20 : "<<sumrange(10,20)<<endl;
    return 0;
}