// fuction with return type ---- with argument
#include<iostream>
using namespace std;
int factorial(int num)//5
{
   int i,fact=1;
   for(i=1;i<=num;i++)
   {
     fact=fact*i; //120
   }
   return fact;
}
void range(int s,int e)
{
    int i;
    for(i=s;i<=e;i++)//6
    {
        cout<<"factorial of "<<i<<" = "<<factorial(i)<<endl;
    }
}
int main()
{
    int res=factorial(5);
    cout<<"factorila of 5 : "<<res<<endl;
    range(1,10);
    return 0;
}