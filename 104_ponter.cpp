// how to allocate dyanamic array
#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    int *temp=arr;//400
    *arr = 12;
    arr++; // 404
    *arr = 34;
    arr++; // 408
    *arr = 56;
    arr++; // 412
    *arr = 78;
    arr++; // 416
    *arr = 90;
    int i;
    arr=temp;
    cout<<"dynamic array element  : ";
    for (i = 0; i < 5; i++)
    {
        cout << (*arr) << " ";
        arr++;//404
    }
    delete (temp);

    return 0;
}