// open file or create file using open method 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write;
    // create a file
    write.open("abc.txt");
    string s ="data inside varible";
    write<<"hi i am chetan patel"<<endl;
    write<<"this contain write in file using cpp"<<endl;
    write<<s;
    write.close();
    return 0;
}