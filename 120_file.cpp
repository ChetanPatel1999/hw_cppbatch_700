//read file 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("abc.txt");
    read>>s;
    cout<<s<<" ";
    read>>s;
    cout<<s;
    read.close();
    return 0;
}