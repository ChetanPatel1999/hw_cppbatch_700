// dyanamic memory allocataion in cpp
// we use new keyword to allocate dynamic memory.
#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int;
    int *pt= new int(67);// allocate dynamic memory and assign  67 that memory
    float *fp= new float(12.45);
    *ptr=90;
    cout<<"value of :"<<(*ptr)<<endl;
    cout<<"value of :"<<(*pt)<<endl;
    cout<<"float value of :"<<(*fp)<<endl;
    delete(ptr);
    return 0;
}