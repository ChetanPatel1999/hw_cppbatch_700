#include<iostream>
using namespace std;
int main()
{
    int arr[5]={12,34,56,78,90};
    int *ptr,i;
    ptr=&arr[0];
    cout<<"array element are :";
    for(i=0;i<5;i++)
    {
      cout<<(*ptr)<<" ";
      ptr++;//408
    }
    return 0;
}