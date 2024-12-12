// read file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("abc.txt");
    string s;
    getline(read, s);
    cout << s<<endl;
    getline(read, s);
    cout << s<<endl;
    return 0;
}