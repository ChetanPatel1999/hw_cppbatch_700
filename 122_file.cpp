//read file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("abc.txt");
    string s;
    while(read.eof()==0)
    {
        getline(read,s);
        cout<<s<<endl;
    }
    return 0;
}