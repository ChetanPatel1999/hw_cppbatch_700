//array is a collection of similer data type element.
// all element store on different different index.
//index start from 0 to array size -1
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter array element : ";
    int i;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"array element are : ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    //sum of all element of array
    //  2  4  5  6  3
    int sum =0;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<endl<<"sum of array element : "<<sum<<endl;
    return 0;
}