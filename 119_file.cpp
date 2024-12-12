//file open or create using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write("aaa.txt");
    write<<"this file create using constructor"<<endl;
    write.close();
    return 0;
}