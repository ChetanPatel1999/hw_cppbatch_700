#include<iostream>
using namespace std;
int main()
{
    string s1="chetan patel",vovel;
    int i;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            vovel.push_back(s1[i]);
        }
    }
    cout<<"vovel string : "<<vovel<<endl;
    return 0;
}