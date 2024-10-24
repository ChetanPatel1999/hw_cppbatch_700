//wap to check given char is vovel or consonent.
#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"enter a alphabet : ";
    cin>>alpha;
    if(alpha=='a'  || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        cout<<"alphabet is vovel";
    }
    else{
        cout<<"alphabet is consonenet";
    }
    return 0;
}